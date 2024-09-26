//Write a C++ program that swaps two numbers.

//w3resource
#include <iostream>

using namespace std;

int main() {
    // Declare variables for the two numbers
    int num1, num2;

    // Display a message to prompt the user
    cout << "Swap two numbers :" << endl;
    cout << "-----------------------" << endl;

    // Input the first number
    cout << "Input 1st number : ";
    cin >> num1;

    // Input the second number
    cout << "Input 2nd number : ";
    cin >> num2;

    // Output the numbers before swapping
    cout << "Before swapping the numbers:" << endl;
    cout << "1st number is : " << num1 << endl;
    cout << "2nd number is : " << num2 << endl;

    // Swap the numbers using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Output the numbers after swapping
    cout << "After swapping the 1st number is : " << num1 << endl;
    cout << "After swapping the 2nd number is : " << num2 << endl;

    return 0;
}
