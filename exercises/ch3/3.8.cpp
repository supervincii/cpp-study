// Use range for to change all characters in a string to 'X'

#include <cstdio>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int range_for() {
  string input;

  cout << "Using range for loop." << endl;
  cout << "Enter a string: ";
  getline(cin, input);

  for (auto &c : input) {
    if (c == ' ') continue;
    c = 'X';
  }

  cout << "New string: " << input << endl;
  return 0;
}

int while_loop() {
  string input;
  string::size_type n = 0;

  cout << "Using while loop." << endl;
  cout << "Enter a string: ";
  getline(cin, input);

  while (n < input.size()) {
    char &c = input[n];
    if (input[n] == ' ') {
      ++n;
      continue;
    }
    c = 'X';
    ++n;
  }

  cout << "New string: " << input << endl;
  return 0;
}

int traditional_for() {
  string input;

  cout << "Using traditional for loop." << endl;
  cout << "Enter a string: ";
  getline(cin, input);

  for (string::size_type n = 0; n < input.size(); ++n) {
    char &c = input[n];
    if (input[n] == ' ')
      continue;
    c = 'X';
  }

  cout << "New string: " << input << endl;
  return 0;
}

int main() {
  // range_for();
  // while_loop();
  traditional_for();
  return 0;
}
