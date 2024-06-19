template<typename T> 
T generate_number(T l, T r) {
  return l + (rand() % (r - l + 1));
}

template<typename T>
void generate_array(T l, T r, T n) {
  for (int i = 0; i < n; ++i) {
    std::cout << generate_number(l, r) << " ";
  }
  std::cout << "\n";
}

template<typename T>
void generate_permutation(T l, T r) {
  std::vector<int> perm(r - l + 1);
  iota(perm.begin(), perm.end(), l);
  random_shuffle(perm.begin(), perm.end());
  
  for (auto &x : perm)
    std::cout << x << " ";
  
  std::cout << "\n"; 
}

void generate_string(int l, int r, int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << char('a' + generate_number(l, r));
  }
  std::cout << "\n";
}

// can be used to generate binary string 
void generate_numeric_string(int l, int r, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << char(generate_number(l, r) + '0');
    }
    std::cout << "\n";
}

// can be used to generate alpha-numeric string
// [nl, nr) numeric range
// [cl, cr) characters range
void generate_alpha_numeric_string(int nl, int nr, int cl, int cr, int size) {
    for (int i = 0; i < size; ++i) {
        int x = generate_number(0, i + 1);
        std::cout << (x & 1 ? char(generate_number(nl, nr) + '0') : char('a' + generate_number(cl, cr)));
    }
    std::cout << "\n";
}

// src - https://www.geeksforgeeks.org/random-tree-generator-using-prufer-sequence-with-examples/
void print_tree_edges(std::vector<int>& prufer, int m) {
    int vertices = m + 2;
    std::vector<int> vertex_set(vertices);
 
    // Initialize the array of vertices
    for (int i = 0; i < vertices; i++)
        vertex_set[i] = 0;
 
    // Number of occurrences of vertex in code
    for (int i = 0; i < vertices - 2; i++)
        vertex_set[prufer[i] - 1] += 1;
 
    int j = 0;
 
    // Find the smallest label not present in
    // prufer[].
    for (int i = 0; i < vertices - 2; ++i) {
        for (j = 0; j < vertices; ++j) {
 
            // If j+1 is not present in prufer set
            if (vertex_set[j] == 0) {
 
                // Remove from Prufer set and print
                // pair.
                vertex_set[j] = -1;

                std::cout << j + 1 << " " << prufer[i] << "\n";
 
                vertex_set[prufer[i] - 1]--;
 
                break;
            }
        }
    }
 
    j = 0;
 
    // For the last element
    for (int i = 0; i < vertices; i++) {
        if (vertex_set[i] == 0 && j == 0) {
            std::cout << i + 1 << " ", j++;
        } else if (vertex_set[i] == 0 && j == 1) {
            std::cout << i + 1 << "\n";
        }
    }
}
 
// Function to Generate Random Tree
void generate_tree(int n) {
    if (n == 1) {
        std::cout << "1\n";
        return;
    }else{
    std::cout << n << "\n";
    }
    int length = n - 2;
    std::vector<int> prufer(length);
 
    // Loop to Generate Random Array
    for (int i = 0; i < length; ++i) {
        prufer[i] = generate_number(0, length + 1) + 1;
    }

    print_tree_edges(prufer, length);
}

// n - vertices, m - edges
void generate_graph(int n, int m) {
    for (int i = 0; i < m; ++i) {
        int u = generate_number(1, n);
        int x = u > 1 ? generate_number(1, u - 1);
        int y = u + 1 < n ? generate_number(u + 1, n);
        int z = rand() % n;
        cout << u << " " << (z & 1 ? x : y) << "\n";
    }
}
