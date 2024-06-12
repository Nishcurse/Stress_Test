@echo off

for /l %%i in (1, 1, 100) do (
    echo %%i
    g++ -std=c++20 -o GenerateCases GenerateCases.cpp
    
    GenerateCases.exe %%i 200 > genrated.txt

    g++.exe -std=c++20 -DONLINE_JUDGE "optimalSoln.cpp" -o "optimalSoln.exe" && optimalSoln.exe < genrated.txt > output.txt

    g++.exe -std=c++20 -DONLINE_JUDGE "testSoln.cpp" -o "testSoln.exe" && testSoln.exe < genrated.txt > test.txt

    fc output.txt test.txt || goto :out
)

:out