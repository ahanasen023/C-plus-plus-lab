#include <iostream>
using namespace std;

int main() {
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int length = 0;

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}