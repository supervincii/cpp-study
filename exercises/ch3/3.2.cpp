#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int read_lines() {
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
    return 0;
}

int read_words() {
    string word;
    while (cin >> word) {
        cout << word << endl;
    }

    return 0;
}

int main() {
    // read_lines();
    // read_words();
    return 0;
}