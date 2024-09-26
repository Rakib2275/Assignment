//The first and only line of input contains two space separated integers denoting
//the width and height of the rectangle.

//HackerRank

#include <iostream>

using namespace std;

int main() {
    int width, height;

    // Prompt the user for input
    cout << "Enter the width and height of the rectangle (space-separated): ";

    // Read the width and height from input
    cin >> width >> height;

    // Calculate the area and perimeter
    int area = width * height;
    int perimeter = 2 * (width + height);

    // Output the results
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
