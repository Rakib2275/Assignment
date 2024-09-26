//Leetcode
// length of the last word
#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(const string& s) {
    int length = 0;
    int i = s.size() - 1;

    while (i >= 0 && s[i] == ' ') {
        --i;
    }

    while (i >= 0 && s[i] != ' ') {
        ++length;
        --i;
    }

    return length;
}

int main() {
    string s = "I am a student";

    int result = lengthOfLastWord(s);
    cout << result <<endl;

    return 0;
}

