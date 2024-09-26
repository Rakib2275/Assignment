//string reverse
//leetCode
#include <iostream>
#include <cstring> // For strlen

class Solution {
public:
    void reverseString(char* s) {
        int left = 0; // Pointer to the start
        int right = strlen(s) - 1; // Pointer to the end

        while (left < right) {
            // Swap characters
            std::swap(s[left], s[right]);
            left++; // Move start pointer forward
            right--; // Move end pointer backward
        }
    }
};

int main() {
    char s[] = "hello"; // C-style string
    Solution solution;

    solution.reverseString(s); // Reverse the string

    std::cout << "Reversed string: " << s << std::endl; // Output the reversed string

    return 0;
}

