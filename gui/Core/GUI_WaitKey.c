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
File        : GUI_WaitKey.c
Purpose     : Implementation of GUI_WaitKey
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"

int GUI_WaitKey(void) {
  int r;
  do {
    r =  GUI_GetKey();
    if (r)
      break;
    GUI_Exec();
  } while (1);
  return r;
}

