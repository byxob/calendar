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
File        : WIDGET_ListBox.c
Purpose     : Example demonstrating the LISTBOX widget
----------------------------------------------------------------------
*/

#include "gui.H"
#include "framewin.h"
#include "listbox.h"
#include <stddef.h>

/*******************************************************************
*
*       static variables
*
********************************************************************
*/

static const GUI_ConstString _ListBox[] = {
  "English", "Deutsch", NULL
};

/*******************************************************************
*
*       static code
*
********************************************************************
*/

/*******************************************************************
*
*       _DemoListBox

  Demonstrates the use of a listbox
*/
static void _DemoListBox(void) {
  int i;
  int NumEntries;
  LISTBOX_Handle hListBox;
  GUI_SetColor(0xFFFFFF);
  GUI_SetFont(&GUI_Font24_ASCII);
  GUI_SetTextAlign(GUI_TA_HCENTER);
  GUI_DispStringAt("Listbox - Sample",160,5);
  GUI_SetTextAlign(GUI_TA_LEFT);
  GUI_SetColor(0xFFFFFF);
  GUI_SetFont(&GUI_Font8x16);
  /* Create the listbox */
  GUI_Delay(500);
  GUI_DispStringAtCEOL("using", 5, 40);
  GUI_DispStringAtCEOL("LISTBOX_Create", 5, 55);
  GUI_Delay(1000);
  hListBox = LISTBOX_Create(_ListBox, 100, 120, 120, 75, WM_CF_SHOW);
  GUI_Delay(1350);
  GUI_DispStringAtCEOL("LISTBOX_AddString", 5, 55);
  GUI_Delay(1000);
  LISTBOX_AddString(hListBox, "Français");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Japanese");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Italiano");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Español");
  NumEntries = LISTBOX_GetNumItems(hListBox);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("WM_SetFocus", 5, 55);
  GUI_Delay(750);
  WM_SetFocus(hListBox);
  /* Modify listbox attributes */
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_SetFont", 5, 55);
  GUI_Delay(750);
  LISTBOX_SetFont(hListBox, &GUI_Font13B_1);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("SCROLLBAR_CreateAttached", 5, 55);
  GUI_Delay(750);
  SCROLLBAR_CreateAttached(hListBox, SCROLLBAR_CF_VERTICAL);
  /* Change current selection of the listbox */
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_IncSel", 5, 55);
  GUI_Delay(750);
  for (i = 0; i < NumEntries - 1; i++) {
    LISTBOX_IncSel(hListBox);
    GUI_Delay(500);
	}
  GUI_Delay(250);
  GUI_DispStringAtCEOL("LISTBOX_DecSel", 5, 55);
  GUI_Delay(750);
  for (i = 0; i < NumEntries - 1; i++) {
    LISTBOX_DecSel(hListBox);
    GUI_Delay(500);
	}
  GUI_Delay(750);
  /* Delete listbox widget */
  GUI_DispStringAtCEOL("LISTBOX_Delete", 5, 55);
  GUI_Delay(1000);
  LISTBOX_Delete(hListBox);
  GUI_ClearRect(0,80,320,240);
  GUI_Delay(1250);
  GUI_Clear();
  GUI_Delay(750);
}

/*******************************************************************
*
*       _DemoListBoxAsChild

  Demonstrates the use of a listbox as child of a frame window
*/
static void _DemoListBoxAsChild(void) {
  int i;
  int NumEntries;
  FRAMEWIN_Handle hFrame;
  LISTBOX_Handle hListBox;
  GUI_SetColor(0xFFFFFF);
  GUI_SetFont(&GUI_Font24_ASCII);
  GUI_SetTextAlign(GUI_TA_HCENTER);
  GUI_DispStringAt("Listbox as child - Sample", 160, 5);
  GUI_SetTextAlign(GUI_TA_LEFT);
  GUI_SetColor(0xFFFFFF);
  GUI_SetFont(&GUI_Font8x16);
  /* Create the frame window */
  GUI_Delay(500);
  GUI_DispStringAtCEOL("using", 5, 40);
  GUI_DispStringAtCEOL("FRAMEWIN_Create", 5, 55);
  GUI_Delay(1000);
  hFrame = FRAMEWIN_Create("List box", NULL, WM_CF_SHOW, 100, 120, 120, 100);
  FRAMEWIN_SetTextColor(hFrame, 0x999999);
  /* Modify frame window attributes */
  GUI_Delay(1350);
  GUI_DispStringAtCEOL("FRAMEWIN_SetFont", 5, 55);
  GUI_Delay(750);
  FRAMEWIN_SetFont(hFrame, &GUI_Font16B_ASCII);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("FRAMEWIN_SetTextColor", 5, 55);
  GUI_Delay(750);
  FRAMEWIN_SetTextColor(hFrame, 0xFFFFFF);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("FRAMEWIN_SetBarColor", 5, 55);
  GUI_Delay(750);
  FRAMEWIN_SetBarColor(hFrame, 0, 0x0000FF);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("FRAMEWIN_SetTextAlign", 5, 55);
  GUI_Delay(750);
  FRAMEWIN_SetTextAlign(hFrame, GUI_TA_HCENTER);
  /* Create the listbox */
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_CreateAsChild", 5, 55);
  GUI_Delay(750);
  hListBox = LISTBOX_CreateAsChild(_ListBox, hFrame, 0, 0, 0, 0, WM_CF_SHOW);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_AddString", 5, 55);
  GUI_Delay(1000);
  LISTBOX_AddString(hListBox, "Français");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Japanese");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Italiano");
  GUI_Delay(500);
  LISTBOX_AddString(hListBox, "Español");
  NumEntries = LISTBOX_GetNumItems(hListBox);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("WM_SetFocus", 5, 55);
  GUI_Delay(750);
  WM_SetFocus(hListBox);
  /* Modify listbox attributes */
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_SetFont", 5, 55);
  GUI_Delay(750);
  LISTBOX_SetFont(hListBox, &GUI_Font13B_1);
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("SCROLLBAR_CreateAttached", 5, 55);
  GUI_Delay(750);
  SCROLLBAR_CreateAttached(hListBox, SCROLLBAR_CF_VERTICAL);
  /* Change current selection of the listbox */
  GUI_Delay(1250);
  GUI_DispStringAtCEOL("LISTBOX_IncSel", 5, 55);
  GUI_Delay(750);
  for (i = 0; i < NumEntries - 1; i++) {
    LISTBOX_IncSel(hListBox);
    GUI_Delay(500);
	}
  GUI_Delay(250);
  GUI_DispStringAtCEOL("LISTBOX_DecSel", 5, 55);
  GUI_Delay(750);
  for (i = 0; i < NumEntries - 1; i++) {
    LISTBOX_DecSel(hListBox);
    GUI_Delay(500);
	}
  GUI_Delay(750);
  /* Delete framewin widget */
  GUI_DispStringAtCEOL("FRAMEWIN_Delete", 5, 55);
  GUI_Delay(1000);
  FRAMEWIN_Delete(hFrame);
  GUI_ClearRect(0,80,320,240);
  GUI_Delay(1250);
  GUI_Clear();
  GUI_Delay(750);
}

/*******************************************************************
*
*       MainTask
*
*       Demonstrates LISTBOX widget
*
********************************************************************
*/

void MainTask(void) {
  GUI_Init();
  GUI_SetBkColor(0x0);
  GUI_Clear();
  while(1) {
    _DemoListBox();
    _DemoListBoxAsChild();
  }
}
