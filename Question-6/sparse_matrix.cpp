#include <iostream>
#include <vector>
using namespace std;

void represent_sparse_matrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int non_zero_count = 0;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (matrix[r][c] != 0) non_zero_count++;
        }
    }

    cout << "Sparse Matrix Representation (Row, Column, Value):\n";
    cout << rows << " " << cols << " " << non_zero_count << "\n";
    
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (matrix[r][c] != 0) {
                cout << r << " " << c << " " << matrix[r][c] << "\n";
            }
        }
    }
}