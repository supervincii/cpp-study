#include <iostream>
#include <string>

using std::string;
using std:: cout; using std::cin; using std::endl;

int main() {
    string input, concat;
    // while (cin >> input) {
    //     concat += input;
    // }
    // cout << "\nPrinting concatenated string:" << endl;
    // cout << concat << endl;

    while (cin >> input) {
        concat += (input + " ");
    }
    cout << "\nPrinting concatenated string: " << endl;
    cout << concat << endl;
    //
    return 0;
}