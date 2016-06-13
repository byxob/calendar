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
File        : F16_ASCII.C
Purpose     : ASCII Character Set similar to Swiss
Height      : 16
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"

#ifndef GUI_FLASH
  #define GUI_FLASH
#endif

/* The following line needs to be included in any file selecting the
   font. A good place would be GUIConf.h
*/
extern GUI_FLASH const GUI_FONT GUI_Font16_ASCII;

GUI_FLASH const unsigned char acFont16ASCII_32[16] = { /* code 32 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_33[16] = { /* code 33 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_34[16] = { /* code 34 */
  ________,
  ________,
  ________,
  _X_X____,
  _X_X____,
  _X_X____,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_35[16] = { /* code 35 */
  ________,
  ________,
  ________,
  ___X__X_,
  ___X__X_,
  __X___X_,
  XXXXXXX_,
  __X__X__,
  __X__X__,
  XXXXXXX_,
  _X__X___,
  _X__X___,
  _X__X___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_36[16] = { /* code 36 */
  ________,
  ________,
  ________,
  __XXX___,
  _X_X_X__,
  _X_X____,
  _X_X____,
  _XXX____,
  ___XXX__,
  ___X_X__,
  _X_X_X__,
  _X_X_X__,
  __XXX___,
  ___X____,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_37[32] = { /* code 37 */
  ________,________,
  ________,________,
  ________,________,
  __XX____,X_______,
  _X__X__X,________,
  _X__X__X,________,
  _X__X_X_,________,
  __XX__X_,________,
  _____X__,XX______,
  _____X_X,__X_____,
  ____X__X,__X_____,
  ____X__X,__X_____,
  ___X____,XX______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_38[32] = { /* code 38 */
  ________,________,
  ________,________,
  ________,________,
  ___XX___,________,
  __X__X__,________,
  __X__X__,________,
  __X__X__,________,
  ___XX___,________,
  __XX____,________,
  _X__X__X,________,
  _X___X_X,________,
  _X___XX_,________,
  __XXX__X,X_______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_39[16] = { /* code 39 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_40[16] = { /* code 40 */
  ________,
  ________,
  ________,
  ___X____,
  __X_____,
  __X_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  __X_____,
  __X_____,
  ___X____};

GUI_FLASH const unsigned char acFont16ASCII_41[16] = { /* code 41 */
  ________,
  ________,
  ________,
  X_______,
  _X______,
  _X______,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  _X______,
  _X______,
  X_______};

GUI_FLASH const unsigned char acFont16ASCII_42[16] = { /* code 42 */
  ________,
  ________,
  ________,
  __X_____,
  XXXXX___,
  __X_____,
  _X_X____,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_43[16] = { /* code 43 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ____X___,
  ____X___,
  ____X___,
  _XXXXXXX,
  ____X___,
  ____X___,
  ____X___,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_44[16] = { /* code 44 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __X_____,
  __X_____,
  __X_____,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_45[16] = { /* code 45 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  XXX_____,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_46[16] = { /* code 46 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_47[16] = { /* code 47 */
  ________,
  ________,
  ________,
  ___X____,
  ___X____,
  __X_____,
  __X_____,
  __X_____,
  _X______,
  _X______,
  _X______,
  X_______,
  X_______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_48[16] = { /* code 48 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_49[16] = { /* code 49 */
  ________,
  ________,
  ________,
  ___X____,
  __XX____,
  _X_X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_50[16] = { /* code 50 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  _____X__,
  _____X__,
  _____X__,
  ____X___,
  ___X____,
  __X_____,
  _X______,
  XXXXXX__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_51[16] = { /* code 51 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  _____X__,
  _____X__,
  __XXX___,
  _____X__,
  _____X__,
  _____X__,
  X____X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_52[16] = { /* code 52 */
  ________,
  ________,
  ________,
  ____X___,
  ___XX___,
  ___XX___,
  __X_X___,
  __X_X___,
  _X__X___,
  _X__X___,
  XXXXXX__,
  ____X___,
  ____X___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_53[16] = { /* code 53 */
  ________,
  ________,
  ________,
  _XXXXX__,
  _X______,
  _X______,
  X_______,
  XXXXX___,
  X____X__,
  _____X__,
  _____X__,
  X____X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_54[16] = { /* code 54 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  X_______,
  X_______,
  X_XXX___,
  XX___X__,
  X____X__,
  X____X__,
  X____X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_55[16] = { /* code 55 */
  ________,
  ________,
  ________,
  XXXXXX__,
  ____X___,
  ____X___,
  ___X____,
  ___X____,
  __X_____,
  __X_____,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_56[16] = { /* code 56 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  X____X__,
  X____X__,
  _XXXX___,
  X____X__,
  X____X__,
  X____X__,
  X____X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_57[16] = { /* code 57 */
  ________,
  ________,
  ________,
  _XXXX___,
  X____X__,
  X____X__,
  X____X__,
  X___XX__,
  _XXX_X__,
  _____X__,
  _____X__,
  X___X___,
  _XXX____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_58[16] = { /* code 58 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_59[16] = { /* code 59 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_60[16] = { /* code 60 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ______X_,
  ____XX__,
  __XX____,
  _X______,
  __XX____,
  ____XX__,
  ______X_,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_61[16] = { /* code 61 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  XXXXXXX_,
  ________,
  ________,
  XXXXXXX_,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_62[16] = { /* code 62 */
  ________,
  ________,
  ________,
  ________,
  ________,
  _X______,
  __XX____,
  ____XX__,
  ______X_,
  ____XX__,
  __XX____,
  _X______,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_63[16] = { /* code 63 */
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _X___X__,
  _____X__,
  ____X___,
  ___X____,
  __X_____,
  __X_____,
  ________,
  __X_____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_64[32] = { /* code 64 */
  ________,________,
  ________,________,
  ________,________,
  ____XXXX,X_______,
  __XX____,_X______,
  _X______,__X_____,
  _X__XXX_,X__X____,
  X__X___X,X__X____,
  X_X_____,X__X____,
  X_X____X,___X____,
  X_X____X,__X_____,
  X_X___XX,__X_____,
  X__XXX_X,XX______,
  _X______,___X____,
  __X_____,_XX_____,
  ___XXXXX,X_______};

GUI_FLASH const unsigned char acFont16ASCII_65[32] = { /* code 65 */
  ________,________,
  ________,________,
  ________,________,
  ____X___,________,
  ___X_X__,________,
  ___X_X__,________,
  ___X_X__,________,
  __X___X_,________,
  __X___X_,________,
  _XXXXXXX,________,
  _X_____X,________,
  X_______,X_______,
  X_______,X_______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_66[32] = { /* code 66 */
  ________,________,
  ________,________,
  ________,________,
  _XXXXXX_,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _XXXXXX_,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _XXXXXX_,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_67[32] = { /* code 67 */
  ________,________,
  ________,________,
  ________,________,
  ___XXX__,________,
  __X___X_,________,
  _X_____X,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _X_____X,________,
  __X___X_,________,
  ___XXX__,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_68[32] = { /* code 68 */
  ________,________,
  ________,________,
  ________,________,
  _XXXXX__,________,
  _X____X_,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X____X_,________,
  _XXXXX__,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_69[32] = { /* code 69 */
  ________,________,
  ________,________,
  ________,________,
  _XXXXXXX,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _XXXXXXX,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _XXXXXXX,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_70[16] = { /* code 70 */
  ________,
  ________,
  ________,
  _XXXXXX_,
  _X______,
  _X______,
  _X______,
  _XXXXX__,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_71[32] = { /* code 71 */
  ________,________,
  ________,________,
  ________,________,
  ___XXXX_,________,
  __X____X,________,
  _X______,X_______,
  _X______,________,
  _X______,________,
  _X___XXX,X_______,
  _X______,X_______,
  _X______,X_______,
  __X____X,________,
  ___XXXX_,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_72[32] = { /* code 72 */
  ________,________,
  ________,________,
  ________,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _XXXXXXX,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_73[16] = { /* code 73 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_74[16] = { /* code 74 */
  ________,
  ________,
  ________,
  ____X___,
  ____X___,
  ____X___,
  ____X___,
  ____X___,
  ____X___,
  ____X___,
  X___X___,
  X___X___,
  _XXX____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_75[32] = { /* code 75 */
  ________,________,
  ________,________,
  ________,________,
  _X______,X_______,
  _X_____X,________,
  _X____X_,________,
  _X___X__,________,
  _X__X___,________,
  _X_XX___,________,
  _XX__X__,________,
  _X____X_,________,
  _X_____X,________,
  _X______,X_______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_76[16] = { /* code 76 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _XXXXXX_,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_77[32] = { /* code 77 */
  ________,________,
  ________,________,
  ________,________,
  _X______,_X______,
  _XX_____,XX______,
  _XX_____,XX______,
  _X_X___X,_X______,
  _X_X___X,_X______,
  _X__X_X_,_X______,
  _X__X_X_,_X______,
  _X__X_X_,_X______,
  _X___X__,_X______,
  _X___X__,_X______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_78[32] = { /* code 78 */
  ________,________,
  ________,________,
  ________,________,
  _X_____X,________,
  _XX____X,________,
  _X_X___X,________,
  _X_X___X,________,
  _X__X__X,________,
  _X__X__X,________,
  _X___X_X,________,
  _X___X_X,________,
  _X____XX,________,
  _X_____X,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_79[32] = { /* code 79 */
  ________,________,
  ________,________,
  ________,________,
  ___XXXX_,________,
  __X____X,________,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  __X____X,________,
  ___XXXX_,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_80[32] = { /* code 80 */
  ________,________,
  ________,________,
  ________,________,
  _XXXXXX_,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _XXXXXX_,________,
  _X______,________,
  _X______,________,
  _X______,________,
  _X______,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_81[32] = { /* code 81 */
  ________,________,
  ________,________,
  ________,________,
  ___XXXX_,________,
  __X____X,________,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X______,X_______,
  _X___XX_,X_______,
  __X____X,________,
  ___XXXX_,X_______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_82[32] = { /* code 82 */
  ________,________,
  ________,________,
  ________,________,
  _XXXXXX_,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _XXXXXX_,________,
  _X___X__,________,
  _X____X_,________,
  _X____X_,________,
  _X_____X,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_83[32] = { /* code 83 */
  ________,________,
  ________,________,
  ________,________,
  __XXXXX_,________,
  _X_____X,________,
  _X_____X,________,
  _X______,________,
  __XXX___,________,
  _____XX_,________,
  _______X,________,
  _X_____X,________,
  _X_____X,________,
  __XXXXX_,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_84[16] = { /* code 84 */
  ________,
  ________,
  ________,
  XXXXXXX_,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_85[32] = { /* code 85 */
  ________,________,
  ________,________,
  ________,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  _X_____X,________,
  __X___X_,________,
  ___XXX__,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_86[32] = { /* code 86 */
  ________,________,
  ________,________,
  ________,________,
  X_______,X_______,
  X_______,X_______,
  _X_____X,________,
  _X_____X,________,
  __X___X_,________,
  __X___X_,________,
  ___X_X__,________,
  ___X_X__,________,
  ____X___,________,
  ____X___,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_87[32] = { /* code 87 */
  ________,________,
  ________,________,
  ________,________,
  X_____X_,____X___,
  X____X_X,____X___,
  _X___X_X,___X____,
  _X___X_X,___X____,
  _X___X_X,___X____,
  __X_X___,X_X_____,
  __X_X___,X_X_____,
  __X_X___,X_X_____,
  ___X____,_X______,
  ___X____,_X______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_88[16] = { /* code 88 */
  ________,
  ________,
  ________,
  X_____X_,
  _X___X__,
  _X___X__,
  __X_X___,
  ___X____,
  ___X____,
  __X_X___,
  _X___X__,
  _X___X__,
  X_____X_,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_89[32] = { /* code 89 */
  ________,________,
  ________,________,
  ________,________,
  _X_____X,________,
  __X___X_,________,
  __X___X_,________,
  ___X_X__,________,
  ___X_X__,________,
  ____X___,________,
  ____X___,________,
  ____X___,________,
  ____X___,________,
  ____X___,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_90[16] = { /* code 90 */
  ________,
  ________,
  ________,
  _XXXXXX_,
  _____X__,
  ____X___,
  ____X___,
  ___X____,
  ___X____,
  __X_____,
  __X_____,
  _X______,
  XXXXXXX_,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_91[16] = { /* code 91 */
  ________,
  ________,
  ________,
  _XX_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _XX_____};

GUI_FLASH const unsigned char acFont16ASCII_92[16] = { /* code 92 */
  ________,
  ________,
  ________,
  X_______,
  X_______,
  _X______,
  _X______,
  _X______,
  __X_____,
  __X_____,
  __X_____,
  ___X____,
  ___X____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_93[16] = { /* code 93 */
  ________,
  ________,
  ________,
  _XX_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  _XX_____};

GUI_FLASH const unsigned char acFont16ASCII_94[16] = { /* code 94 */
  ________,
  ________,
  ________,
  ________,
  __X_____,
  _X_X____,
  _X_X____,
  _X_X____,
  X___X___,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_95[16] = { /* code 95 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  XXXXXXX_};

GUI_FLASH const unsigned char acFont16ASCII_96[16] = { /* code 96 */
  ________,
  ________,
  ________,
  _X______,
  __X_____,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_97[16] = { /* code 97 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _____X__,
  __XXXX__,
  _X___X__,
  _X__XX__,
  __XX_X__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_98[16] = { /* code 98 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X_XX___,
  _XX__X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _XXXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_99[16] = { /* code 99 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _X______,
  _X______,
  _X______,
  _X___X__,
  __XXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_100[16] = { /* code 100 */
  ________,
  ________,
  ________,
  _____X__,
  _____X__,
  _____X__,
  __XX_X__,
  _X__XX__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  __XXXX__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_101[16] = { /* code 101 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _X___X__,
  _XXXXX__,
  _X______,
  _X___X__,
  __XXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_102[16] = { /* code 102 */
  ________,
  ________,
  ________,
  __X_____,
  _X______,
  _X______,
  XXX_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_103[16] = { /* code 103 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XX_X__,
  _X__XX__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X__XX__,
  __XX_X__,
  _____X__,
  _X___X__,
  __XXX___};

GUI_FLASH const unsigned char acFont16ASCII_104[16] = { /* code 104 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X_XX___,
  _XX__X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_105[16] = { /* code 105 */
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_106[16] = { /* code 106 */
  ________,
  ________,
  ________,
  _X______,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  X_______};

GUI_FLASH const unsigned char acFont16ASCII_107[16] = { /* code 107 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X___X__,
  _X__X___,
  _X_X____,
  _XXX____,
  _X__X___,
  _X__X___,
  _X___X__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_108[16] = { /* code 108 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_109[32] = { /* code 109 */
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  _X_XX__X,X_______,
  _XX__XX_,_X______,
  _X___X__,_X______,
  _X___X__,_X______,
  _X___X__,_X______,
  _X___X__,_X______,
  _X___X__,_X______,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_110[16] = { /* code 110 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X_XX___,
  _XX__X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_111[16] = { /* code 111 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  __XXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_112[16] = { /* code 112 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X_XX___,
  _XX__X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _XX__X__,
  _X_XX___,
  _X______,
  _X______,
  _X______};

GUI_FLASH const unsigned char acFont16ASCII_113[16] = { /* code 113 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XX_X__,
  _X__XX__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X__XX__,
  __XX_X__,
  _____X__,
  _____X__,
  _____X__};

GUI_FLASH const unsigned char acFont16ASCII_114[16] = { /* code 114 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X_X____,
  _XX_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_115[16] = { /* code 115 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  __XXX___,
  _X___X__,
  _X______,
  __XXX___,
  _____X__,
  _X___X__,
  __XXX___,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_116[16] = { /* code 116 */
  ________,
  ________,
  ________,
  ________,
  _X______,
  _X______,
  XXX_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _XX_____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_117[16] = { /* code 117 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  _X___X__,
  __XXXX__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_118[16] = { /* code 118 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  X___X___,
  X___X___,
  _X_X____,
  _X_X____,
  _X_X____,
  __X_____,
  __X_____,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_119[32] = { /* code 119 */
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  X___X___,X_______,
  X___X___,X_______,
  _X_X_X_X,________,
  _X_X_X_X,________,
  _X_X_X_X,________,
  __X___X_,________,
  __X___X_,________,
  ________,________,
  ________,________,
  ________,________};

GUI_FLASH const unsigned char acFont16ASCII_120[16] = { /* code 120 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X___X__,
  __X_X___,
  __X_X___,
  ___X____,
  __X_X___,
  __X_X___,
  _X___X__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_121[16] = { /* code 121 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _X___X__,
  _X___X__,
  __X_X___,
  __X_X___,
  __X_X___,
  ___X____,
  ___X____,
  ___X____,
  ___X____,
  _XX_____};

GUI_FLASH const unsigned char acFont16ASCII_122[16] = { /* code 122 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _XXXXX__,
  ____X___,
  ____X___,
  ___X____,
  __X_____,
  __X_____,
  _XXXXX__,
  ________,
  ________,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_123[16] = { /* code 123 */
  ________,
  ________,
  ________,
  __X_____,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  X_______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  __X_____};

GUI_FLASH const unsigned char acFont16ASCII_124[16] = { /* code 124 */
  ________,
  ________,
  ________,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  _X______,
  ________};

GUI_FLASH const unsigned char acFont16ASCII_125[16] = { /* code 125 */
  ________,
  ________,
  ________,
  _X______,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  ___X____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  __X_____,
  _X______};

GUI_FLASH const unsigned char acFont16ASCII_126[16] = { /* code 126 */
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  _XXX__X_,
  X__XXXX_,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________,
  ________};



GUI_FLASH const GUI_CHARINFO GUI_CharInfo_Font16ASCII[96] = {
   {   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_32 } /* code  32 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_33 } /* code  33 */
  ,{   5,   5,  1, (void GUI_FLASH *)&acFont16ASCII_34 } /* code  34 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_35 } /* code  35 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_36 } /* code  36 */
  ,{  12,  12,  2, (void GUI_FLASH *)&acFont16ASCII_37 } /* code  37 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_38 } /* code  38 */
  ,{   2,   2,  1, (void GUI_FLASH *)&acFont16ASCII_39 } /* code  39 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_40 } /* code  40 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_41 } /* code  41 */
  ,{   5,   5,  1, (void GUI_FLASH *)&acFont16ASCII_42 } /* code  42 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_43 } /* code  43 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_44 } /* code  44 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_45 } /* code  45 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_46 } /* code  46 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_47 } /* code  47 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_48 } /* code  48 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_49 } /* code  49 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_50 } /* code  50 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_51 } /* code  51 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_52 } /* code  52 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_53 } /* code  53 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_54 } /* code  54 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_55 } /* code  55 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_56 } /* code  56 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_57 } /* code  57 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_58 } /* code  58 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_59 } /* code  59 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_60 } /* code  60 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_61 } /* code  61 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_62 } /* code  62 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_63 } /* code  63 */
  ,{  13,  13,  2, (void GUI_FLASH *)&acFont16ASCII_64 } /* code  64 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_65 } /* code  65 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_66 } /* code  66 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_67 } /* code  67 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_68 } /* code  68 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_69 } /* code  69 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_70 } /* code  70 */
  ,{  10,  10,  2, (void GUI_FLASH *)&acFont16ASCII_71 } /* code  71 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_72 } /* code  72 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_73 } /* code  73 */
  ,{   6,   6,  1, (void GUI_FLASH *)&acFont16ASCII_74 } /* code  74 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_75 } /* code  75 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_76 } /* code  76 */
  ,{  11,  11,  2, (void GUI_FLASH *)&acFont16ASCII_77 } /* code  77 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_78 } /* code  78 */
  ,{  10,  10,  2, (void GUI_FLASH *)&acFont16ASCII_79 } /* code  79 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_80 } /* code  80 */
  ,{  10,  10,  2, (void GUI_FLASH *)&acFont16ASCII_81 } /* code  81 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_82 } /* code  82 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_83 } /* code  83 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_84 } /* code  84 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_85 } /* code  85 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_86 } /* code  86 */
  ,{  13,  13,  2, (void GUI_FLASH *)&acFont16ASCII_87 } /* code  87 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_88 } /* code  88 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_89 } /* code  89 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_90 } /* code  90 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_91 } /* code  91 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_92 } /* code  92 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_93 } /* code  93 */
  ,{   5,   5,  1, (void GUI_FLASH *)&acFont16ASCII_94 } /* code  94 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_95 } /* code  95 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_96 } /* code  96 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_97 } /* code  97 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_98 } /* code  98 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_99 } /* code  99 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_100 } /* code 100 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_101 } /* code 101 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_102 } /* code 102 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_103 } /* code 103 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_104 } /* code 104 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_105 } /* code 105 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_106 } /* code 106 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_107 } /* code 107 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_108 } /* code 108 */
  ,{  11,  11,  2, (void GUI_FLASH *)&acFont16ASCII_109 } /* code 109 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_110 } /* code 110 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_111 } /* code 111 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_112 } /* code 112 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_113 } /* code 113 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_114 } /* code 114 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_115 } /* code 115 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_116 } /* code 116 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_117 } /* code 117 */
  ,{   5,   5,  1, (void GUI_FLASH *)&acFont16ASCII_118 } /* code 118 */
  ,{   9,   9,  2, (void GUI_FLASH *)&acFont16ASCII_119 } /* code 119 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_120 } /* code 120 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_121 } /* code 121 */
  ,{   7,   7,  1, (void GUI_FLASH *)&acFont16ASCII_122 } /* code 122 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_123 } /* code 123 */
  ,{   3,   3,  1, (void GUI_FLASH *)&acFont16ASCII_124 } /* code 124 */
  ,{   4,   4,  1, (void GUI_FLASH *)&acFont16ASCII_125 } /* code 125 */
  ,{   8,   8,  1, (void GUI_FLASH *)&acFont16ASCII_126 } /* code 126 */
};

GUI_FLASH const GUI_FONT_PROP GUI_Font16ASCIIProp1 = {
   32                           /* first character               */
  ,126                          /* last character                */
  ,&GUI_CharInfo_Font16ASCII[0] /* address of first character    */
  ,(void GUI_FLASH *)0                     /* pointer to next GUI_FONT_PROP */
};

GUI_FLASH const GUI_FONT GUI_Font16_ASCII = {
   GUI_FONTTYPE_PROP            /* type of font    */
  ,16                           /* height of font  */
  ,16                           /* space of font y */
  ,1                            /* magnification x */
  ,1                            /* magnification y */
  ,(void GUI_FLASH *)&GUI_Font16ASCIIProp1
};

