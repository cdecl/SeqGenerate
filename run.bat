
rm -f *.txt

echo off 

sleep 1
c++\main.exe

sleep 1
dotnet dotnetcore\bin\Release\net5.0\dotnetcore.dll

sleep 1
golang\bin\main.exe

sleep 1
java -cp java Main

REM python python\main.py

wc -l *.txt
