@echo off

for /l %%i in (1, 1, 100) do (
    echo Running test case %%i
    g++ -std=c++17 -o GenerateCases GenerateCases.cpp
    GenerateCases.exe  > generated.txt

    g++.exe -std=c++17 -DONLINE_JUDGE "brute.cpp" -o "brute.exe" && brute.exe < generated.txt > bruteOutput.txt

    g++.exe -std=c++17 -DONLINE_JUDGE "optimal.cpp" -o "optimal.exe" && optimal.exe < generated.txt > optimalOutput.txt

    fc bruteOutput.txt optimalOutput.txt > nul
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
