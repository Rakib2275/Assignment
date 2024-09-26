//palindrom Number;
//LeetCode;
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Palindrome(int x) {
    string s =to_string(x);
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    return s == reversed_s;
}

int main() {
    int x;
    cout<<"Enter Any integer Number : ";
    cin>>x;
    if (Palindrome(x)) {
        cout << "true" <<endl;
    } else {
        cout << "false" <<endl;
    }
    return 0;
}

