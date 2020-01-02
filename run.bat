
rm -f *.txt

echo off 

sleep 1
c++\main

sleep 1
dotnet dotnetcore\bin\Release\netcoreapp3.1\netcon.dll

sleep 1
golang\bin\main.exe

sleep 1
java -cp java Main

REM python python\main.py

wc -l *.txt
