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
---------------------------END-OF-HEADER------------------------------
*/

#include "gui.h"

void MainTask(void) {
  GUI_PID_STATE TouchState;
  GUI_Init();
  GUI_CURSOR_Show();
  GUI_Delay(1000);
  GUI_CURSOR_Select(&GUI_CursorCrossL);
  GUI_Delay(1000);
  while (1) {
    GUI_TOUCH_GetState(&TouchState);
    GUI_DispStringAt("Analog input: ", 0, 40);
    GUI_DispDec(GUI_TOUCH_GetxPhys(),4);
    GUI_DispString(",");
    GUI_DispDec(GUI_TOUCH_GetyPhys(),4);

    GUI_DispStringAt("TOUCH_X_MeasureX: ",0,60);
    GUI_DispDec(TouchState.x,4);
    GUI_DispString(",");
    GUI_DispDec(TouchState.y,4);
    
    GUI_Delay(100);
  };

}
