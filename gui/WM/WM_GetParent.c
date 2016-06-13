/*
*********************************************************************************************************
*                                                uC/GUI
*                        Universal graphic software for embedded applications
*
*                       (c) Copyright 2002, Micrium Inc., Weston, FL
*                       (c) Copyright 2002, SEGGER Microcontroller Systeme GmbH
*
*              �C/GUI is protected by international copyright laws. Knowledge of the
*              source code may not be used to write a similar product. This file may
*              only be used in accordance with a license and should not be redistributed
*              in any way. We appreciate your understanding and fairness.
*
----------------------------------------------------------------------
File        : WM_GetParent.c
Purpose     : Windows manager, add. module
----------------------------------------------------------------------
*/


#include "WM_Intern.h"

#if GUI_WINSUPPORT    /* If 0, WM will not generate any code */

/*******************************************************************
*
*         Public code
*
********************************************************************
*/

WM_HWIN WM_GetParent(WM_HWIN hWin) {
  WM_LOCK();
  if (hWin) {
    hWin = WM_H2P(hWin)->hParent;
  }
  WM_UNLOCK();
  return hWin;
}

#else                                       /* Avoid empty object files */
  void WM_GetParent_C(void) {}
#endif /* WM_MAX_WINDOW */
