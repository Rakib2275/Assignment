//happy number
//leetcode
#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen; // To track numbers we've encountered
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n); // Mark this number as seen
            n = getNext(n); // Get the next number in the sequence
        }
        return n == 1; // If we reached 1, it's a happy number
    }

private:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10; // Get the last digit
            totalSum += digit * digit; // Square it and add to total
            n /= 10; // Remove the last digit
        }
        return totalSum; // Return the sum of squares of digits
    }
};

int main() {
    int n = 19; // Input number
    Solution solution;
    bool result = solution.isHappy(n);

    std::cout << "Is " << n << " a happy number? " << (result ? "true" : "false") << std::endl;

    return 0;
}

