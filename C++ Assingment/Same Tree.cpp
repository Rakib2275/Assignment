//Same Tree
//leetCode
#include <iostream>

bool areArraysEqual(const int* p, int sizeP, const int* q, int sizeQ) {
    // Check if sizes are equal
    if (sizeP != sizeQ) {
        return false;
    }

    // Check if all elements are equal
    for (int i = 0; i < sizeP; ++i) {
        if (p[i] != q[i]) {
            return false;
        }
    }

    return true; // All elements are equal
}

int main() {
    // Define two arrays and their sizes
    int p[] = {1, 2, 3}; // Input array p
    int q[] = {1, 2, 3}; // Input array q
    int sizeP = sizeof(p) / sizeof(p[0]); // Calculate size of array p
    int sizeQ = sizeof(q) / sizeof(q[0]); // Calculate size of array q

    // Check if the arrays are equal
    if (areArraysEqual(p, sizeP, q, sizeQ)) {
        std::cout << "Output: true" << std::endl;
    } else {
        std::cout << "Output: false" << std::endl;
    }

    return 0; // Successful exit
}

