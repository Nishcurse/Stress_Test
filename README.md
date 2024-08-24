Hello Everyone,

Note : Some Things have changed in newer version of c++(gcc ver 14) so generative might not function correctly i will update those very soon! sorry for all the trouble ~nish 

The idea for this project (we can call it that, I guess) was inspired by [this blog](https://codeforces.com/blog/entry/102287). However, we found ourselves too lazy to write the code needed to generate test cases and then check them.

Project Link &mdash; [Click Here to Open](https://github.com/Nishcurse/Stress_Test/tree/main) (If you find this helpful, please consider starring this repository )

###What does this do?

Our tool functions as a stress tester by generating numerous random test cases and comparing their outputs. If it detects any discrepancies between the outputs, it immediately notifies you.

### What's Special about this?

in cases where you need to generate specific data structures like arrays, permutations, or trees, you would typically have to write custom code to create them. However, with our <generative.h> header, these functions are readily available, simplifying your task and significantly reducing the time and effort required.

### The generative.h header includes functions such as:

#### generate_number(l, r)

**Description:** Generates a random number in the range \([l, r]\) (inclusive).

**Note:** This is the only function that returns a value instead of printing it. Make sure to print or store the returned value.

```c++
int num = generate_number(1, 10); // Generates a number between 1 and 10.
cout << num << endl; // Prints the generated number.
```

#### generate_array(l, r, n)

**Description:** Generates an array of size  n  with random values in the range [l, r] (inclusive).

```c++
generate_array(1, 10, 5); // Prints an array of 5 elements with values between 1 and 10.
```

#### generate_permutation(l, r)

**Description:** Generates a random permutation of numbers from  l  to  r  (inclusive).

**Usage Example:**

```c++
generate_permutation(1, 5); // Prints a permutation of numbers from 1 to 5.
```

#### generate_string(l, r, n)

**Description:** Generates a random string of length  n  with characters from the set [ l, r ], where 0≤l≤r<26 . For example, (0, 2) generates a string with characters 'a', 'b', 'c'.

**Usage Example:**

```c++
generate_string(0, 2, 5); // Prints a string of length 5 with characters 'a', 'b', 'c'.
```

#### generate_alpha_numeric_string(nl, nr, cl, cr, size)

**Description:** Generates an alphanumeric string of length size with numeric characters in the range [nl,nr) and alphabetic characters in the range [cl,cr) .

#### generate_tree(n)

**Description:** Generates a random tree with  n nodes.

**Usage Example:**

```c++
generate_tree(5); // Prints a random tree with 5 nodes.
```
#### These images here display the generate function and the output of the test case it generates.
<br>
<div style="display: flex; flex-direction: row; ">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/ed52cd78-ee55-4c80-b6cd-5f498cbc4ab3" style="width: auto; height: 300px; flex: 1;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/201b6d4b-b832-49e7-89b3-2370ca9c8ff1" style="width: auto; height: 300px; flex: 1;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/21ce31e8-fe03-432b-a829-ce4f8554aff4" style="width: auto; height: 300px; flex: 1;">
</div>
<br>



### How to Use?

1. Go to the repository and download it as a zip file.
2. Extract it on your system.
3. In `generateCases.cpp`, write the test cases logic using the provided functions, which makes it easy and fast.
4. Write the correct or brute-force logic in `brute.cpp`.
5. Write the code that you need to check or that fails in `optimal.cpp`.
6. Double-click on `Script{version}.bat`. It should start without any issues. You will see something like this (see image) on your screen. If it finds a case where both codes differ in output, it will give you the test case.

**NOTE:** If you don't have the latest version of GCC, use `scriptCpp17.bat` else you can use `scriptCpp20.bat`.

###These three images demonstrate stress testing for [this problem](https://codeforces.com/problemset/problem/1975/A).
<br>

<div style="display: flex; flex-direction: row;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/62d80ddb-5134-4035-9096-10612de99eb6" style="width: auto; height: 300px; flex: 1;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/44ea9722-d763-4014-a5e0-77ba38cfc85a" style="width: auto; height: 300px; flex: 1;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/581120eb-b573-4a2c-bd8a-61308d68bb97" style="width: auto; height: 300px; flex: 1;">
</div>
<br>

###Script File Interface look's like this 
<br>
<div style="display: flex; justify-content: center;">
    <img src="https://github.com/Nishcurse/Javascript/assets/114647752/054f64c0-c1e8-4574-9998-d7c6f711d0ef" style="width: 50%; max-width: 400px;">
</div> 
<br>
**NOTE:** &mdash; "We designed this with the goal of making things easier, but since it was put together by developers who might not be experts, there could be some mistakes. Your feedback means a lot to us, so please feel free to share any thoughts you have!"

Thank you!<br>
Team Coding Wiz<br>
[user:nish,2024-06-19] , [user:gokuu007,2024-06-19] ,[user:Advtik,2024-06-19]

 
