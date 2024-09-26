//Fibonacci Number
//LeetCode
#include <iostream>

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0; // F(0)
        int b = 1; // F(1)
        int result;

        for (int i = 2; i <= n; ++i) {
            result = a + b; // F(n) = F(n-1) + F(n-2)
            a = b;         // Update F(n-2) to F(n-1)
            b = result;    // Update F(n-1) to F(n)
        }

        return result; // Return F(n)
    }
};

int main() {
    int n = 5; // Input number
    Solution solution;
    int result = solution.fib(n);

    std::cout << "F(" << n << ") = " << result << std::endl; // Output the result

    return 0;
}

