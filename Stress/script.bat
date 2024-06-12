@echo off

for /l %%i in (1, 1, 100) do (
    echo Running test case %%i
    g++ -std=c++20 -o GenerateCases GenerateCases.cpp
    
    GenerateCases.exe %%i 2000 8000000000 > generated.txt

    g++.exe -std=c++20 -DONLINE_JUDGE "optimalSoln.cpp" -o "optimalSoln.exe" && optimalSoln.exe < generated.txt > output.txt

    g++.exe -std=c++20 -DONLINE_JUDGE "testSoln.cpp" -o "testSoln.exe" && testSoln.exe < generated.txt > test.txt

    fc output.txt test.txt > nul
    if errorlevel 1 (
        echo Test case %%i failed
        echo Content of generated.txt:
        type generated.txt
        goto :end
    )
)

:end
echo Script finished. Press any key to exit.
pause > nul
