#include <bits/stdc++.h>

using namespace std;

// l - r | generates numbers in range from [l , r) inclusive
template<typename T> 
T generate_number(T l, T r) {
  return l + (rand() % r);
}

// [l - r) -> range of values for the array
// n -> size of array
template<typename T>
void generate_array(T l, T r, T n) {
  for (int i = 0; i < n; ++i) {
    cout << generate_number(l, r) << " ";
  }
  cout << "\n";
}

template<typename T>
void generate_permutation(T l, T r) {
  vector<int> perm(r - l + 1);
  iota(perm.begin(), perm.end(), l);
  random_shuffle(perm.begin(), perm.end());
  
  for (auto &x : perm)
    cout << x << " ";
  
  cout << "\n"; 
}

// 0 <= l <= r <= 26 -> 0-based indexing
void generate_string(int l, int r, int size) {
  for (int i = 0; i < size; ++i) {
    cout << char('a' + generate_number(l, r));
  }
  cout << "\n";
}

// Generates a random tree with n nodes
void generate_tree(int n) {
    vector<pair<int, int>> edges;
    
    // Connect each node to a previous node to ensure a connected tree
    for (int i = 2; i <= n; ++i) {
        int u = i;
      //indexing from 1 to n of nodes
        int v = generate_number(1, i);  // connect to any previous node
        edges.emplace_back(u, v);
    }
    
    // Print the edges
    for (const auto& edge : edges) {
        cout << edge.first << " " << edge.second << "\n";
    }
}

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
