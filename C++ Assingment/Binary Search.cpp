//Binary Search
//geeksforgeeks
#include <iostream>

int main() {
    int n, a, low, high, mid;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Validate number of elements
    if (n <= 0) {
        std::cout << "Invalid number of elements.\n";
        return 1;
    }

    // Dynamic memory allocation for the array
    int* arr = new int[n];

    std::cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the value to find: ";
    std::cin >> a;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;  // Avoid potential overflow

        if (arr[mid] < a) {
            low = mid + 1;
        } else if (arr[mid] == a) {
            std::cout << a << " found at index " << mid << std::endl;
            delete[] arr;  // Free the allocated memory before exiting
            return 0;  // Exit the program once the value is found
        } else {
            high = mid - 1;
        }
    }

    std::cout << a << " is not present in the array\n";

    delete[] arr;  // Free the allocated memory at the end
    return 0;  // Successful exit
}

