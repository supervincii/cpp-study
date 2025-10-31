// Program that reads a string with punctuations.
// Writes what was read with punctuations removed.

#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string input;

  cout << "Enter a string with punctuations: ";
  getline(cin, input);

  for (auto c : input) {
    if (ispunct(c))
      continue;
    else
      cout << c;
  }
  
  cout << "\n";
  return 0;
}
