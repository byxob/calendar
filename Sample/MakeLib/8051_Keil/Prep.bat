@ECHO OFF
ECHO Prep.bat:            Preparing environment
goto Start

******************************************************************************
*
* File      : Prep.bat
* Parameters: None
* Purpose   : Sets path and other environment variables as required by tool chain
*
* This file as is uses the Microsoft Compiler MSVC 6.0 for x86 targets.
* It needs to be modified if a library for a target compiler is
* desired or if the compiler is installed in a different location.
*
******************************************************************************

:START

REM Next line avoids setting of path

IF "%_PREP_KEIL_%" == "_PREP_KEIL_" GOTO END

SET _PREP_KEIL_=_PREP_KEIL_
SET PATH=%PATH%;C:\PROGRAM FILES\KEIL\C51\BIN;

:END

