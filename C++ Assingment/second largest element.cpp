//3. Write a C++ program to find the second largest element in an array of integers.
//w3Resource
#include <iostream>
#include <limits>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Validate number of elements
    if (n < 2) {
        std::cout << "Array must contain at least two elements." << std::endl;
        return 1; // Exit with an error code
    }

    int* arr = new int[n]; // Dynamic memory allocation for the array

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int largest = std::numeric_limits<int>::min();
    int second_largest = std::numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; // Update second largest if current is unique
        }
    }

    if (second_largest == std::numeric_limits<int>::min()) {
        std::cout << "There is no second largest element (all elements may be equal)." << std::endl;
    } else {
        std::cout << "The second largest element is: " << second_largest << std::endl;
    }

    delete[] arr; // Free allocated memory
    return 0; // Successful exit
}

