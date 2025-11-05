#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> text;
  string line;

  while (getline(cin, line))
    text.push_back(line);

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto &c : *it)
      c = toupper(c);
  }

  for (auto elem : text) {
    if (elem.empty())
      cout << endl;
    else
      cout << elem << " ";
  }

  return 0;
}
