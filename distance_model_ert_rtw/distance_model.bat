set MATLAB=D:\MATLAB\R2016b

cd .

if "%1"=="" (D:\MATLAB\R2016b\bin\win64\gmake  -f distance_model.mk all) else (D:\MATLAB\R2016b\bin\win64\gmake  -f distance_model.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
