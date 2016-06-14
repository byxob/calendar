/*
*********************************************************************************************************
*                                                uC/GUI
*                        Universal graphic software for embedded applications
*
*                       (c) Copyright 2002, Micrium Inc., Weston, FL
*                       (c) Copyright 2002, SEGGER Microcontroller Systeme GmbH
*
*              µC/GUI is protected by international copyright laws. Knowledge of the
*              source code may not be used to write a similar product. This file may
*              only be used in accordance with a license and should not be redistributed
*              in any way. We appreciate your understanding and fairness.
*
----------------------------------------------------------------------
File        : WMTouch.c
Purpose     : Windows manager, touch support
----------------------------------------------------------------------
*/


#include <stddef.h>           /* needed for definition of NULL */
#include "WM_Intern.h"
#include "GUIDebug.h"

#if (GUI_WINSUPPORT)

/****************************************************************
*
*          static data
*
*****************************************************************
*/
static WM_HWIN _hWinLast;

/****************************************************************
*
*          Static code
*
*****************************************************************
*/
void _cbDeleteWindow(WM_HWIN hWin) {
  if (hWin == _hWinLast) {
    _hWinLast = 0;
  }
}

/****************************************************************
*
*       Public code
*
*****************************************************************
*/

/****************************************************************
*
*       WM_HandlePID       
*
* Polls the touch screen. If something has changed,
* sends a message to the concerned window.
*
* Return value:
*   0 if nothing has been done
*   1 if touch message has been sent
*/
int WM_HandlePID(void) {
  int r = 0;
  static GUI_PID_STATE StateLast;
  GUI_PID_STATE State, StateNew;
  GUI_PID_GetState(&StateNew);
  WM_LOCK();
  WM__pfDeleteWindowHook = _cbDeleteWindow;   /* TBD in the future... Hook function management in order to allow multiple hook functions */
  if ((StateLast.x != StateNew.x) || (StateLast.y != StateNew.y) || (StateLast.Pressed != StateNew.Pressed)) {
    State = StateNew;
    #if GUI_SUPPORT_CURSOR
      GUI_CURSOR_SetPosition(State.x, State.y);
    #endif
    /* Send message if pressed or just released */
    if (StateLast.Pressed | State.Pressed) {
      WM_MESSAGE Msg;
      WM_HWIN hWin;
      r = 1;
      Msg.MsgId = WM_TOUCH;
      Msg.Data.p = (void*)&State;
      if (WM__hCapture == 0) {
        hWin = WM_Screen2hWin(State.x, State.y);
      } else {
        hWin = WM__hCapture;
      }
      /* Tell window if it is no longer pressed */
      if (_hWinLast != hWin) {
        if (_hWinLast != 0) {
          if (State.Pressed) {
            Msg.Data.p = NULL;    /* no longer in this window */
          } else {     /* "Clicked" in this window */
            StateLast.Pressed =0;
            Msg.Data.p = (void*)&StateLast;
          }
          GUI_DEBUG_LOG1 ("\nSending WM_Touch to LastWindow %d (out of area)", _hWinLast);
          WM_SendMessage(_hWinLast, &Msg);
          _hWinLast = 0;
        }
      }
      if (hWin) {           /* Sending WM_Touch to Window */
        /* convert screen into window coordinates */
        WM_Obj* pWin = WM_H2P(hWin);
        State.x -= pWin->Rect.x0;
        State.y -= pWin->Rect.y0;
        WM_SendMessage(hWin, &Msg);
        /* Remember window */
        if (State.Pressed) {
          _hWinLast = hWin;
        } else {
          /* Handle automatic captue release */
          if (WM__CaptureReleaseAuto) {
            WM_ReleaseCapture();
          }
          _hWinLast = 0;
        }
      }
    }
    StateLast = StateNew;
  }
  WM_UNLOCK();
  return r;
}

#else

void WM_Touch_c(void) {} /* avoid empty object files */

#endif  /* (GUI_WINSUPPORT & GUI_SUPPORT_TOUCH) */

