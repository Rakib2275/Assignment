//reversed number
//Leetcode
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class NumberReverser {
private:
    int number;
public:

    NumberReverser(int n) : number(n) {}

    int reverseNumber() {
        string s = to_string(number);
        reverse(s.begin(), s.end());
        return stoi(s);
    }

};

int main() {
    int x;

    cout<<"Enter integer Number : ";
    cin>>x;

    NumberReverser reverser(x);
    int reversedNumber = reverser.reverseNumber();
    cout <<"Reversed Number: " << reversedNumber <<endl;
    return 0;
}

