@echo off

for %%i in (*.cpp) do (
    g++ %%i -o %%~ni.exe -static
)
