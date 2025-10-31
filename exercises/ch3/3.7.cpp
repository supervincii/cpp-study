// Use range for to change all characters in a string to 'X'
// Defining loop control variable as `char`

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

  // Defining the loop control variable as a char won't update input.
  // This is because `c` does not reference the character in the string.
  // `c` just becomes a copy of each character.
  // We can check this by comparing each character in the iteration.


  for (auto c : input) {
    if (c == ' ') continue;
    c = 'X';
  }

  // Demonstrating that `c` does not change `input[n]`
  string::size_type n;
  if (!input.empty()) {
    for (n = 0; n < input.size(); ++n) {
      char c = input[n]; // Make a copy of the character. Same as `(auto c : input)`
      if (c == ' ')
        continue;
      c = 'X';
      cout << "c: " << c << "\tinput char: " << input[n] << endl;
    }
  }

  cout << "New string: " << input << endl;
  return 0;
}
