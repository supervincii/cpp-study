#include <vector>

using std::vector;

int main() {
  vector<int> ivec;
  // ivec[0] = 42; ILLEGAL: We cannot use subscripting to add to a vector
  ivec.push_back(42); // Use pushback instead.

  return 0;
}
