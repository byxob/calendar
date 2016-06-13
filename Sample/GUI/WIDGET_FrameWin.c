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
File        : WIDGET_FrameWin.c
Purpose     : Example demonstrating the use of a FRAMEWIN widget
----------------------------------------------------------------------
*/

#include "gui.H"
#include "framewin.h"
#include <stddef.h>

/*******************************************************************
*
*       static code
*
********************************************************************
*/

/*******************************************************************
*
*       _cbChild
*/
static void _cbChild(WM_MESSAGE * pMsg) {
  WM_HWIN hWin = (FRAMEWIN_Handle)(pMsg->hWin);
  switch (pMsg->MsgId) {
  case WM_PAINT:
    /* Handle the paint message */
    GUI_SetBkColor(GUI_WHITE);
    GUI_SetColor(GUI_BLACK);
    GUI_SetFont(&GUI_FontComic24B_ASCII);
    GUI_SetTextAlign(GUI_TA_HCENTER | GUI_TA_VCENTER);
    GUI_Clear();
    GUI_DispStringHCenterAt("Child window", 
                            WM_GetWindowSizeX(hWin) / 2, 
                            WM_GetWindowSizeY(hWin) / 2);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbFrame
*/
static void _cbFrame(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_BLACK);
    GUI_Clear();
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbBkWindow

  This callback is necessary to redraw the background when
  frame window is moved
*/
static void _cbBkWindow(WM_MESSAGE * pMsg) {
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_BLACK);
    GUI_Clear();
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    GUI_DispStringHCenterAt("WIDGET_FrameWin - Sample", 160, 5);
    GUI_SetFont(&GUI_Font6x8);
    GUI_DispStringHCenterAt("The function FRAMEWIN_Create creates both the", 160, 190);
    GUI_DispStringHCenterAt("frame window and the child window.", 160, 200);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _DemoFramewin

  Creates the frame window and sets the callback for frame, child
  and background window
*/
static void _DemoFramewin(void) {
  FRAMEWIN_Handle hFrame;
  WM_HWIN hChild;
  /* Set callback for background window */
  WM_SetCallback(WM_HBKWIN, _cbBkWindow);
  /* Create frame window */
  hFrame = FRAMEWIN_Create("Frame window", _cbFrame, WM_CF_SHOW, 
                           80, 100, 160, 75);
  /* Modify frame window attributes */
  FRAMEWIN_SetActive(hFrame, 1);
  FRAMEWIN_SetMoveable(hFrame, 1);
  FRAMEWIN_SetFont(hFrame, &GUI_Font16B_ASCII);
  FRAMEWIN_SetTextColor(hFrame, GUI_WHITE);
  FRAMEWIN_SetTextAlign(hFrame, GUI_TA_HCENTER);
  /* Get the handle of the child window */
  hChild = WM_GetClientWindow(hFrame);
  /* Set the callback of the child window */
  WM_SetCallback(hChild, _cbChild);
  /* Handle the frame window */
  while (1) {
    WM_Exec();
  }
}

/*******************************************************************
*
*       MainTask
*
*       Demonstrating the use of the FRAMEWIN widget
*
********************************************************************
*/

void MainTask(void) {
  GUI_Init();
	_DemoFramewin();
}

