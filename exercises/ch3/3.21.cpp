#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto b = v.begin(); b != v.end(); ++b)
    *b *= *b;

  for (auto b = v.begin(); b != v.end(); ++b)
    cout << *b << " ";

  cout << endl;

  return 0;
}
