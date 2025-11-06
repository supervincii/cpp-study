#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int num;
  vector<int> ivec, sum1_vec, sum2_vec;

  while (cin >> num)
    ivec.push_back(num);

  // Printing contents of the vector
  for (auto it = ivec.begin(); it != ivec.end(); ++it)
    cout << *it << " ";
  cout << "\n" << endl;

  // Adding adjacent pairs
  // for (auto it = ivec.begin(); it + 1 != ivec.end(); it += 2)
  //   sum1_vec.push_back(*it + *(it + 1));

  // if (ivec.size() % 2 != 0)
  //   sum1_vec.push_back(ivec.back());
  // Better to use index bases looping here.

  // Adding leftmost and rightmost elements
  auto left = ivec.begin();
  auto right = ivec.end() - 1;
  while (left < right) {
    sum2_vec.push_back(*left + *right);
    ++left;
    --right;
  }
  if (left == right)
    sum2_vec.push_back(*left);

  // Printing added pairs
  cout << "Sum of adjacent pairs: ";
  for (auto it = sum1_vec.begin(); it != sum1_vec.end(); ++it)
    cout << *it << " ";
  cout << "\n" << endl;

  cout << "Sum of leftmost and rightmost pairs: ";
  for (auto it = sum2_vec.begin(); it != sum2_vec.end(); ++it)
    cout << *it << " ";
  cout << "\n" << endl;
  
  return 0;
}
