#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
  vector<int> v1; // 1 element
  vector<int> v2(10); // 10 elements
  vector<int> v3(10, 42); // 10 elements with value of 42
  vector<int> v4{10}; // 1 element of value 10
  vector<int> v5{10, 42}; // 2 elements of value {10, 42}
  vector<string> v6{10}; // 10 elements of empty strings
  vector<string> v7{10, "hi"}; // 10 elements of value "hi"

  std::cout << "Hello World!" << std::endl;
  return 0;
}
