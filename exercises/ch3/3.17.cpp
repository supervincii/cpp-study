#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string word;
  int word_count = 0;
  vector<string> words;
  vector<string>::size_type vec_size = 0;

  while (cin >> word)
    words.push_back(word);

  // Turning every letter in each word to uppercase.
  for (auto &i : words) {
    for (auto &character : i)
      character = std::toupper(character);
  }

  // Printing eight words in a line at a time.
  // New words gets printed at the next line.
  while (vec_size < words.size()) {
    cout << words[vec_size];

    ++vec_size;
    if (vec_size % 8 == 0) {
      cout << "\n";
    } else {
      cout << " ";
    }
  }

  return 0;
}
