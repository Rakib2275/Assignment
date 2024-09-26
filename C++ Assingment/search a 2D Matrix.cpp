//Leetcode
//search a 2D Matrix


#include <iostream>

using namespace std;

bool searchMatrix(int matrix[][4], int m, int n, int target) {
    if (m == 0 || n == 0) return false;

    int row = 0;
    int col = n - 1;

    while (row < m && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            --col;
        } else {
            ++row;
        }
    }

    return false;
}

int main() {
    const int m = 3; // Number of rows
    const int n = 4; // Number of columns
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    bool result = searchMatrix(matrix, m, n, target);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
