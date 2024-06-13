#include <bits/stdc++.h>
#include "generativewoho.h"

using namespace std;

// generate_number(l,r) ->l - r | generates numbers in range from [l , r) inclusive
// generate_array(l,r,n) ->[l - r) -> range of values for the array where n is the size of array
// generate_permutation(l,r) -> generates a random perm with element from l,l+1,....r 
// generate_string(l,r,n) -> for eg (0,3) - a,b,c containing string will be generated zero based indexing  (0<=l<=r<26)
// generate_tree(n) -> Generates a random tree with n nodes

int main (int argc, char **argv) {
  // argv is an array of strings
  // atoi is a C function for converting a string into an int

  srand(time(0)); // srand sets the random seed

  // pass the range of number of testcases you want

  int t = generate_number(1,10);
  cout << t << "\n";
  while (t--) {
    /*
       generate whatever you wanna generate down here - >
    */
  }
}
