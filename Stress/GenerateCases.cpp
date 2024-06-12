#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  // argv is an array of strings
  // atoi is a C function for converting a string into an int

  srand(atoi(argv[1])); // srand sets the random seed
  int lim = atoi(argv[2]);
  int n = 1+(rand() % lim);
  int h = 120000+(rand() % lim);
  cout << h << " " <<  n << endl;
  for (int i = 0; i < n; i++) {
    cout << 1 + (rand() % lim) << " ";
  }
  cout<<endl;
  for (int i = 0; i < n; i++) {
    cout << 1 + (rand() % lim) << " ";
  }
  cout << endl;
}