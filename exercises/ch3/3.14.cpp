#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main() {
  int i;
  vector<int> ivec;

  while (cin >> i)
    ivec.push_back(i);

  for (auto elem : ivec)
    std::cout << elem << std::endl;

  return 0;
}
