# Stress_Test
------------------------------------------------------------------------
**Idea behind this is generally taken from the [is-this-fft blog](https://codeforces.com/blog/entry/102287)**
#Incase you have a lower Version of gcc
make sure you have do this changes in script.bat change it into this 
```@echo off

for /l %%i in (1, 1, 100) do (
    echo Running test case %%i
    g++ -std=c++17 -o GenerateCases GenerateCases.cpp
    
    GenerateCases.exe %%i 200000 10000 > generated.txt

    g++.exe -std=c++17 -DONLINE_JUDGE "optimalSoln.cpp" -o "optimalSoln.exe" && optimalSoln.exe < generated.txt > output.txt

    g++.exe -std=c++17 -DONLINE_JUDGE "testSoln.cpp" -o "testSoln.exe" && testSoln.exe < generated.txt > test.txt

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
```


## How to Set Up the Stress Testing Environment

1. Download the zip file and extract it to a directory on your system.
2. Modify the logic in `GenerateCases.cpp` to suit your problem requirements.
3. Write the code you need to test in `testSoln.cpp`.
4. Write your brute-force logic or the correct solution that you are sure of in `optimalSoln.cpp`.
5. Run `script.bat` by double-clicking it.
6. The process will start, and any discrepancies found will be shown to you. You can check the test case in `generated.txt`. `output.txt` contains the correct solution, and `test.txt` contains the wrong answer.

## More Details on How `GenerateCases.cpp` Works and How You Can Manipulate It

## Version 2.0.0.0
New Functions for Generating Test Cases
We are excited to introduce new functions in our Stress Testing Template to help you generate diverse test cases more easily. Here’s a quick overview of the new features:

### generate_number(l, r)

Description: Generates a random number in the range [l, r] (inclusive).


```generate_number(1, 10); // Generates a number between 1 and 10.```

### generate_array(l, r, n)

Description: Generates an array of size n with random values in the range [l, r] (inclusive).
Usage Example:
```
generate_array(1, 10, 5); // Generates an array of 5 elements with values between 1 and 10.


```
### generate_permutation(l, r)

Description: Generates a random permutation of numbers from l to r (inclusive).
Usage Example:
```
generate_permutation(1, 5); // Generates a permutation of numbers from 1 to 5.

```
### generate_string(l, r, n)

Description: Generates a random string of length n with characters from the set [chr(l), chr(r)] where 0 <= l <= r < 26 (e.g., (0, 2) generates a string with characters 'a', 'b', 'c').
Usage Example:
```
generate_string(0, 2, 5); // Generates a string of length 5 with characters 'a', 'b', 'c'.
```
### generate_tree(n)

Description: Generates a random tree with n nodes.
Usage Example:
```
 generate_tree(5); // Generates a random tree with 5 nodes.
```
Feel free to use these functions to enhance your test case generation and make your stress testing more effective!
Thank you for using our tool! If you have any issues, you can contact us on LinkedIn or other social media platforms.

Thank you,  

https://github.com/Nishcurse/Stress_Test/assets/114647752/ccfcfec5-a9b3-4435-aa6e-80fe23b4fc19


**Team Coding Wiz**





---

<sub>**Version** - 2.0.0.0</sub>  
<sub>**Author** - [nish](https://github.com/Nishcurse) , [Adwiteek Samadder](https://github.com/Advtik) , [Akshat Madhavan](https://github.com/GokuUu007)</sub>
