// Use range for to change all characters in a string to 'X'

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  for (auto &c : input) {
    if (c == ' ') continue;
    c = 'X';
  }

  cout << "New string: " << input << endl;
  return 0;
}
