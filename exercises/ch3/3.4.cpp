#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
    string str1, str2;

    cout << "CHECKING FOR EQUAL STRINGS." << endl;
    cout << "Enter 1st string: ";
    getline(cin, str1);
    cout << "Enter 2nd string: ";
    getline(cin, str2);

    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else {
        if (str1 > str2) {
            cout << "String 1 is greater than string 2." << endl;
        } else {
            cout << "String 2 is greater than string 1." << endl;
        }
    }

    cout << "CHECKING FOR SAME LENGTH STRINGS" << endl;
    if (str1.size() == str2.size()) {
        cout << "Both strings have the same length." << endl;
    } else {
        if (str1.size() > str2.size()) {
            cout << "String 1 is longer than string 2." << endl;
        } else {
            cout << "String 2 is longer than string 1." << endl;
        }
    }

    return 0;
}