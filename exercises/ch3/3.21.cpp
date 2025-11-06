#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_vector_int(const vector<int> &v) {
  for (auto it = v.cbegin(); it != v.cend(); ++it)
    cout << *it << " ";
  cout << endl;
}

void print_vector_string(const vector<string> &v) {
  for (auto it = v.cbegin(); it != v.cend(); ++it)
    cout << *it << " ";
  cout << endl;
}

int main() {
  vector<int> v1; // 1 element
  cout << "v1 size: " << v1.size() << endl;
  print_vector_int(v1);

  vector<int> v2(10); // 10 elements
  cout << "v2 size: " << v2.size() << endl;
  print_vector_int(v2);
  
  vector<int> v3(10, 42); // 10 elements with value of 42
  cout << "v3 size: " << v3.size() << endl;
  print_vector_int(v3);

  vector<int> v4{10}; // 1 element of value 10
  cout << "v4 size: " << v4.size() << endl;
  print_vector_int(v4);
  
  vector<int> v5{10, 42}; // 2 elements of value {10, 42}
  cout << "v5 size: " << v5.size() << endl;
  print_vector_int(v5);
  
  vector<string> v6{10}; // 10 elements of empty strings
  cout << "v6 size: " << v6.size() << endl;
  print_vector_string(v6);
  
  vector<string> v7{10, "hi"}; // 10 elements of value "hi"
  cout << "v7 size: " << v7.size() << endl;
  print_vector_string(v7);
  
  return 0;
}
