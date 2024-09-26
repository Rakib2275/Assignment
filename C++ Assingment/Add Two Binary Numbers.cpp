/*
Write a C++ program to add two binary numbers.
Sample Output:
Addition of two binary numbers:
-----------------------------------
Input the 1st binary number: 1010
Input the 2nd binary number: 0011
The sum of two binary numbers is: 1101
*/
//HackerRank

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to add two binary numbers and return the result
string addBinary(const string &a, const string &b) {
    int n1 = a.size();
    int n2 = b.size();

    // Make sure both strings are of equal length
    int maxLen = max(n1, n2);
    string bin1 = string(maxLen - n1, '0') + a;
    string bin2 = string(maxLen - n2, '0') + b;

    string result = "";
    int carry = 0;

    // Traverse from the end to the beginning
    for (int i = maxLen - 1; i >= 0; --i) {
        int sum = (bin1[i] - '0') + (bin2[i] - '0') + carry;
        result += (sum % 2) + '0'; // Append the result bit
        carry = sum / 2; // Update carry
    }

    // Append the carry if it is not zero
    if (carry) {
        result += '1';
    }

    // Reverse the result string to get the correct answer
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string binary1, binary2;

    // Display a message to prompt the user
    cout << "Addition of two binary numbers:" << endl;
    cout << "-----------------------------------" << endl;

    // Input the first binary number
    cout << "Input the 1st binary number: ";
    cin >> binary1;

    // Input the second binary number
    cout << "Input the 2nd binary number: ";
    cin >> binary2;

    // Add the binary numbers
    string sum = addBinary(binary1, binary2);

    // Output the result
    cout << "The sum of two binary numbers is: " << sum << endl;

    return 0;
}

