@echo off
setlocal enabledelayedexpansion

if "%~1"=="" (
    echo Usage: run ^<filename^>
    echo Example: run fibonacci-recursive
    goto :eof
)

set "FILE=%~1"
if not "%FILE:~-4%"==".cpp" (
    set "FILE=%FILE%.cpp"
)

set "EXE=%~1.exe"

if not exist "%FILE%" (
    echo Error: %FILE% not found!
    goto :eof
)

echo =================================
echo Compiling %FILE% ...
g++ -std=c++17 -O2 -Wall -o "%EXE%" "%FILE%"

if errorlevel 1 (
    echo Compilation FAILED!
    goto :eof
)

echo Running %EXE% ...
echo =================================
"%EXE%"
echo =================================
