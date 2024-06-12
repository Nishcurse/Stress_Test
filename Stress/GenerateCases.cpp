#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  // argv is an array of strings
  // atoi is a C function for converting a string into an int

  srand(atoi(argv[1])); // srand sets the random seed
  int lim = atoi(argv[2]);
  int lim2 = atoi(argv[3]);
  int  x = 1 + (rand() % lim);
  int  y = 1 + (rand() % lim);
  int  z = 1 + (rand() % lim);
  long long int k = 1 + (rand() % lim2);
  cout<<"1\n";
  cout<<x<<" "<<y<<" "<<z<<" ";
  cout<<k<<"\n";
}