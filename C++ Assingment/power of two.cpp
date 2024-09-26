//power of two
//leetcode
#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Using bit manipulation
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    int n = 16; // Input number
    Solution solution;
    bool result = solution.isPowerOfTwo(n);

    std::cout << n << " is a power of two: " << (result ? "true" : "false") << std::endl;

    return 0;
}

