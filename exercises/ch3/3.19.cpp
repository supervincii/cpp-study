#include <vector>

using std::vector;

int main() {
  // Define a vector 3x differently with 10 elements with the value of 42.
  vector<int> v1(10, 42); // PREFERRED: very easy and clear to define
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v3;
  for (int i = 0; i < 10; i++) {
    v3.push_back(42);
  }
}
