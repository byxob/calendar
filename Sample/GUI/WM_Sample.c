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
File        : WM_Sample.c
Purpose     : Demonstrates the window manager
----------------------------------------------------------------------
*/

#include "GUI.H"
#include "string.h"

/*******************************************************************
*
*       defines
*
********************************************************************
*/

#define MSG_CHANGE_TEXT WM_USER+0

#define SPEED 1250

/*******************************************************************
*
*       static variables
*
********************************************************************
*/

static char _acInfoText[40];

static GUI_COLOR _WindowColor1 = GUI_GREEN;
static GUI_COLOR _WindowColor2 = GUI_RED;

static WM_CALLBACK* _cbBkWindowOld;

static WM_HWIN _hWindow1;
static WM_HWIN _hWindow2;


/*******************************************************************
*
*       static code, helper functions
*
********************************************************************
*/

/*******************************************************************
*
*       _ChangeInfoText

  Sends a message to the background window and invalidate it, so
  the callback of the background window display the new text.
*/
static void _ChangeInfoText(char* pStr) {
  WM_MESSAGE Message;
  Message.MsgId  = MSG_CHANGE_TEXT;
  Message.Data.p = pStr;
  WM_SendMessage(WM_HBKWIN, &Message);
  WM_InvalidateWindow(WM_HBKWIN);
}

/*******************************************************************
*
*       _DrawInfoText

  Drawes the info text directly on the display. This function is for
  the moments when no callback is set.
*/
static void _DrawInfoText(char* pStr) {
  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(&GUI_Font24_ASCII);
  GUI_DispStringHCenterAt("WindowManager - Sample", 160, 5);
  GUI_SetFont(&GUI_Font8x16);
  GUI_DispStringAtCEOL(pStr, 5, 40);
}

/*******************************************************************
*
*       _LiftUp
*/
static void _LiftUp(int dy) {
  int i;
  for (i = 0; i < (dy/3); i++) {
    WM_MoveWindow(_hWindow1, 0, -3);
    WM_MoveWindow(_hWindow2, 0, -3);
    GUI_Delay(SPEED/80);
  }
}

/*******************************************************************
*
*       _LiftDown
*/
static void _LiftDown(int dy) {
  int i;
  for (i = 0; i < (dy/3); i++) {
    WM_MoveWindow(_hWindow1, 0, 3);
    WM_MoveWindow(_hWindow2, 0, 3);
    GUI_Delay(SPEED/80);
  }
}

/*******************************************************************
*
*       static code, callbacks for windows
*
********************************************************************
*/

/*******************************************************************
*
*       _cbBkWindow
*/
static void _cbBkWindow(WM_MESSAGE* pMsg) {
  switch (pMsg->MsgId) {
  case MSG_CHANGE_TEXT:
    strcpy(_acInfoText, pMsg->Data.p);
  case WM_PAINT:
    GUI_SetBkColor(GUI_BLACK);
    GUI_Clear();
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    GUI_DispStringHCenterAt("WindowManager - Sample", 160, 5);
    GUI_SetFont(&GUI_Font8x16);
    GUI_DispStringAt(_acInfoText, 5, 40);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbWindow1
*/
static void _cbWindow1(WM_MESSAGE* pMsg) {
  int x, y;
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(_WindowColor1);
    GUI_Clear();
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    x = WM_GetWindowSizeX(pMsg->hWin);
    y = WM_GetWindowSizeY(pMsg->hWin);
    GUI_DispStringHCenterAt("Window 1", x / 2, (y / 2) - 12);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbWindow2
*/
static void _cbWindow2(WM_MESSAGE* pMsg) {
  int x, y;
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(_WindowColor2);
    GUI_Clear();
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    x = WM_GetWindowSizeX(pMsg->hWin);
    y = WM_GetWindowSizeY(pMsg->hWin);
    GUI_DispStringHCenterAt("Window 2", x / 2, (y / 2) - 12);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbDemoCallback1
*/
static void _cbDemoCallback1(WM_MESSAGE* pMsg) {
  int x, y;
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_GREEN);
    GUI_Clear();
    GUI_SetColor(GUI_RED);
    GUI_SetFont(&GUI_FontComic18B_1);
    x = WM_GetWindowSizeX(pMsg->hWin);
    y = WM_GetWindowSizeY(pMsg->hWin);
    GUI_DispStringHCenterAt("Window 1\nanother Callback", x / 2, (y / 2) - 18);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       _cbDemoCallback2
*/
static void _cbDemoCallback2(WM_MESSAGE* pMsg) {
  int x, y;
  switch (pMsg->MsgId) {
  case WM_PAINT:
    GUI_SetBkColor(GUI_MAGENTA);
    GUI_Clear();
    GUI_SetColor(GUI_YELLOW);
    GUI_SetFont(&GUI_FontComic18B_1);
    x = WM_GetWindowSizeX(pMsg->hWin);
    y = WM_GetWindowSizeY(pMsg->hWin);
    GUI_DispStringHCenterAt("Window 2\nanother Callback", x / 2, (y / 2) - 18);
    break;
  default:
    WM_DefaultProc(pMsg);
  }
}

/*******************************************************************
*
*       static code, functions for demo
*
********************************************************************
*/

/*******************************************************************
*
*       _DemoSetDesktopColor

  Demonstrates the use of WM_SetDesktopColor
*/
static void _DemoSetDesktopColor(void) {
  GUI_SetBkColor(GUI_BLUE);
  GUI_Clear();
  _DrawInfoText("WM_SetDesktopColor()");
  GUI_Delay(SPEED*2);
  WM_SetDesktopColor(GUI_BLACK);
  GUI_Delay(SPEED/2);
  /* Set background color and invalidate desktop color.
     This is needed for the later redrawing demo. */
  GUI_SetBkColor(GUI_BLACK);
  WM_SetDesktopColor(GUI_INVALID_COLOR);
}

/*******************************************************************
*
*       _DemoCreateWindow

  Demonstrates the use of WM_CreateWindow
*/
static void _DemoCreateWindow(void) {
  /* Set callback for background window */
  _cbBkWindowOld = WM_SetCallback(WM_HBKWIN, _cbBkWindow);
  /* Create windows */
  _ChangeInfoText("WM_CreateWindow()");
  GUI_Delay(SPEED);
  _hWindow1 = WM_CreateWindow( 50,  70, 155, 90, WM_CF_SHOW | WM_CF_MEMDEV, _cbWindow1, 0);
  GUI_Delay(SPEED/3);
  _hWindow2 = WM_CreateWindow(115, 135, 155, 90, WM_CF_SHOW | WM_CF_MEMDEV, _cbWindow2, 0);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoInvalidateWindow

  Demonstrates the use of WM_InvalidateWindow
*/
static void _DemoInvalidateWindow(void) {
  _ChangeInfoText("WM_InvalidateWindow()");
  _WindowColor1 = GUI_BLUE;
  GUI_Delay(SPEED);
  WM_InvalidateWindow(_hWindow1);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoBringToTop

  Demonstrates the use of WM_BringToTop
*/
static void _DemoBringToTop(void) {
  _ChangeInfoText("WM_BringToTop()");
  GUI_Delay(SPEED);
  WM_BringToTop(_hWindow1);    
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoMoveTo

  Demonstrates the use of WM_MoveTo
*/
static void _DemoMoveTo(void) {
  int i;
  _ChangeInfoText("WM_MoveTo()");
  GUI_Delay(SPEED);
  for (i = 1; i < 66; i++) {
    WM_MoveTo(_hWindow1,  50 + i,  70 + i);
    WM_MoveTo(_hWindow2, 115 - i, 135 - i);
    GUI_Delay(SPEED/80);
  }
  for (i = 1; i < 66; i++) {
    WM_MoveTo(_hWindow1, 115 - i, 135 - i);
    WM_MoveTo(_hWindow2,  50 + i,  70 + i);
    GUI_Delay(SPEED/80);
  }
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoBringToBottom

  Demonstrates the use of WM_BringToBottom
*/
static void _DemoBringToBottom(void) {
  _ChangeInfoText("WM_BringToBottom()");
  GUI_Delay(SPEED);
  WM_BringToBottom(_hWindow1);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoMoveWindow

  Demonstrates the use of WM_MoveWindow
*/
static void _DemoMoveWindow(void) {
  int i;
  _ChangeInfoText("WM_MoveWindow()");
  GUI_Delay(SPEED);
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1,  1,  1);
    WM_MoveWindow(_hWindow2, -1, -1);
    GUI_Delay(SPEED/80);
  }
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1, -1, -1);
    WM_MoveWindow(_hWindow2,  1,  1);
    GUI_Delay(SPEED/80);
  }
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoHideShow

  Demonstrates the use of WM_HideWindow and WM_ShowWindow
*/
static void _DemoHideShow(void) {
  _ChangeInfoText("WM_HideWindow()");
  GUI_Delay(SPEED);
  WM_HideWindow(_hWindow2);
  GUI_Delay(SPEED/3);
  WM_HideWindow(_hWindow1);
  GUI_Delay(SPEED);
  _ChangeInfoText("WM_ShowWindow()");
  GUI_Delay(SPEED);
  WM_ShowWindow(_hWindow1);
  GUI_Delay(SPEED/3);
  WM_ShowWindow(_hWindow2);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoRedrawing

  Demonstrates how useful can be a callback
*/
static void _DemoRedrawing(void) {
  int i;
  _ChangeInfoText("Demonstrating redrawing");
  GUI_Delay(SPEED);
  _LiftUp(40);
  GUI_Delay(SPEED/3);
  _ChangeInfoText("Using a callback for redrawing");
  GUI_Delay(SPEED/3);
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1,  1,  1);
    WM_MoveWindow(_hWindow2, -1, -1);
    GUI_Delay(SPEED/80);
  }
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1, -1, -1);
    WM_MoveWindow(_hWindow2,  1,  1);
    GUI_Delay(SPEED/80);
  }
  GUI_Delay(SPEED/4);
  _LiftDown(30);
  GUI_Delay(SPEED/2);
  _ChangeInfoText("Without redrawing");
  GUI_Delay(SPEED);
  _LiftUp(30);
  GUI_Delay(SPEED/4);
  WM_SetCallback(WM_HBKWIN, _cbBkWindowOld);
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1,  1,  1);
    WM_MoveWindow(_hWindow2, -1, -1);
    GUI_Delay(SPEED/80);
  }
  for (i = 0; i < 65; i++) {
    WM_MoveWindow(_hWindow1, -1, -1);
    WM_MoveWindow(_hWindow2,  1,  1);
    GUI_Delay(SPEED/80);
  }
  GUI_Delay(SPEED/3);
  WM_SetCallback(WM_HBKWIN, _cbBkWindow);
  _LiftDown(40);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoResizeWindow

  Demonstrates the use of WM_ResizeWindow
*/
static void _DemoResizeWindow(void) {
  int i;
  _ChangeInfoText("WM_ResizeWindow()");
  GUI_Delay(SPEED);
  _LiftUp(30);
  for (i = 0; i < 25; i++) {
    WM_ResizeWindow(_hWindow1,  1,  1);
    WM_ResizeWindow(_hWindow2, -1, -1);
    GUI_Delay(SPEED/80);
  }
  for (i = 0; i < 50; i++) {
    WM_ResizeWindow(_hWindow1, -1, -1);
    WM_ResizeWindow(_hWindow2,  1,  1);
    GUI_Delay(SPEED/80);
  }
  for (i = 0; i < 25; i++) {
    WM_ResizeWindow(_hWindow1,  1,  1);
    WM_ResizeWindow(_hWindow2, -1, -1);
    GUI_Delay(SPEED/80);
  }
  _LiftDown(30);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoSetCallback

  Demonstrates the use of WM_SetCallback
*/
static void _DemoSetCallback(void) {
  _ChangeInfoText("WM_SetCallback()");
  GUI_Delay(SPEED);
  WM_SetCallback(_hWindow1, _cbDemoCallback1);
  WM_InvalidateWindow(_hWindow1);
  GUI_Delay(SPEED/2);
  WM_SetCallback(_hWindow2, _cbDemoCallback2);
  WM_InvalidateWindow(_hWindow2);
  GUI_Delay(SPEED*2);
  WM_SetCallback(_hWindow1, _cbWindow1);
  WM_InvalidateWindow(_hWindow1);
  GUI_Delay(SPEED/2);
  WM_SetCallback(_hWindow2, _cbWindow2);
  WM_InvalidateWindow(_hWindow2);
  GUI_Delay(SPEED);
}

/*******************************************************************
*
*       _DemoDeleteWindow

  Demonstrates the use of WM_DeleteWindow
*/
static void _DemoDeleteWindow(void) {
  _ChangeInfoText("WM_DeleteWindow()");
  GUI_Delay(SPEED);
  WM_DeleteWindow(_hWindow2);
  GUI_Delay(SPEED/3);
  WM_DeleteWindow(_hWindow1);
  GUI_Delay(SPEED);
  _ChangeInfoText("");
  GUI_Delay(SPEED);
  /* Restore background callback and window colors */
  WM_SetCallback(WM_HBKWIN, _cbBkWindowOld);
  _WindowColor1 = GUI_GREEN;
  _WindowColor2 = GUI_RED;
}

/*******************************************************************
*
*       MainTask
*
*       Demonstrates the use of the window manager
*
********************************************************************
*/

void MainTask(void) {
  GUI_Init();
  GUI_SetBkColor(GUI_BLACK);
  while (1) {
    _DemoSetDesktopColor();
    _DemoCreateWindow();
    _DemoInvalidateWindow();
    _DemoBringToTop();
    _DemoMoveTo();
    _DemoBringToBottom();
    _DemoMoveWindow();
    _DemoHideShow();
    _DemoRedrawing();
    _DemoResizeWindow();
    _DemoSetCallback();
    _DemoDeleteWindow();
  }
}