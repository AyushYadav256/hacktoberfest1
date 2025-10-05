// Author: Ayush Yadav
// GitHub: https://github.com/AyushYadav256
// Description: Checks if a given string is a palindrome

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string original = str;
    reverse(str.begin(), str.end());
    return original == str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input))
        cout << "✅ '" << input << "' is a palindrome." << endl;
    else
        cout << "❌ '" << input << "' is not a palindrome." << endl;

    return 0;
}
