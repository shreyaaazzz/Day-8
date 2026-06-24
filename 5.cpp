// using recursion display reverse of a string
#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index == str.length()) {
        return;
    }
    reverseString(str, index + 1);
    cout << str[index];
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reverse of the string is: ";
    reverseString(str, 0);
    return 0;
}