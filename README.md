# Stress_Test
------------------------------------------------------------------------
**Idea behind this is generally taken from the [is-this-fft blog](https://codeforces.com/blog/entry/102287)**

## How to Set Up the Stress Testing Environment

1. Download the zip file and extract it to a directory on your system.
2. Modify the logic in `GenerateCases.cpp` to suit your problem requirements.
3. Write the code you need to test in `testSoln.cpp`.
4. Write your brute-force logic or the correct solution that you are sure of in `optimalSoln.cpp`.
5. Run `script.bat` by double-clicking it.
6. The process will start, and any discrepancies found will be shown to you. You can check the test case in `generated.txt`. `output.txt` contains the correct solution, and `test.txt` contains the wrong answer.

## More Details on How `GenerateCases.cpp` Works and How You Can Manipulate It

The idea is to write a program that generates random test cases. Here are some guidelines:

- The code can be quick-and-dirty. During a contest, don't spend time polishing it. Write it as quickly as possible.
- The generator doesn't need to generate any possible test with equal probability. It just needs to reasonably produce any valid small test case.
- Using `rand()` is acceptable here to generate random numbers.
- rand() % m generates values from 0 to m-1, so 1 + rand() % m generates values from 1 to m.
- It's a good idea to take the random seed from an argument and not set it by time, so you can easily regenerate a test if needed.

The code is pretty self-explanatory. The main question you might have is "what are `argc` and `argv`?" They represent the number of arguments and the arguments themselves, respectively. Use `atoi` to convert them as needed. You can use these to apply limits on the upper or lower bounds of the generated random numbers.

## Future Features

We plan to implement features that will help you write `GenerateCases.cpp` more easily. This includes functions to create vectors, strings, and permutations. For now, this is the first version.

Thank you for using our tool! If you have any issues, you can contact us on LinkedIn or other social media platforms.

Thank you,  
**Team Coding Wiz**

---

<sub>**Version** - 1.0.0.0</sub>  
<sub>**Author** - [nish](https://github.com/Nishcurse) , [Adwiteek Samadder](https://github.com/Advtik) , [Akshat Madhavan](https://github.com/GokuUu007)</sub>
