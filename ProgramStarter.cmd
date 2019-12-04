@echo off
title ProgramStarter
echo Program: (should not have '.exe', example: test)
set /p a=
set /p num=once(1)/restart(2): 
if /i %num% == 1 (%a%.exe&pause>nul&exit) ELSE (goto restart)
:restart
%a%.exe
goto restart