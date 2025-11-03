#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
  vector<int> v1; // 1 element
  cout << "v1 size: " << v1.size() << endl;
  cout << "v1 content/s: " << endl;
  for (auto i : v1)
    cout << i << endl;

  vector<int> v2(10); // 10 elements
  cout << "v2 size: " << v2.size() << endl;
  cout << "v2 content/s: " << endl;
  for (auto i : v2)
    cout << i << endl;

  vector<int> v3(10, 42); // 10 elements with value of 42
  cout << "v3 size: " << v3.size() << endl;
  cout << "v3 content/s: " << endl;
  for (auto i : v3)
    cout << i << endl;

  vector<int> v4{10}; // 1 element of value 10
  cout << "v4 size: " << v4.size() << endl;
  cout << "v4 content/s: " << endl;
  for (auto i : v4)
    cout << i << endl;
  
  vector<int> v5{10, 42}; // 2 elements of value {10, 42}
  cout << "v5 size: " << v5.size() << endl;
  cout << "v5 content/s: " << endl;
  for (auto i : v5)
    cout << i << endl;
  
  vector<string> v6{10}; // 10 elements of empty strings
  cout << "v6 size: " << v6.size() << endl;
  cout << "v6 content/s: " << endl;
  for (auto i : v6)
    cout << i << endl;
  
  vector<string> v7{10, "hi"}; // 10 elements of value "hi"
  cout << "v7 size: " << v7.size() << endl;
  cout << "v7 content/s: " << endl;
  for (auto i : v7)
    cout << i << endl;
  
  return 0;
}
