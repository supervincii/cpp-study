#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int num, total_pairs, pair_count = 0;
  vector<int> ivec, sum1_vec, sum2_vec;

  while (cin >> num)
    ivec.push_back(num);

  // Printing contents of the vector
  for (auto elem : ivec)
    cout << elem << " ";
  cout << "\n" << endl;

  // Adding adjacent pairs
  total_pairs = ivec.size()/2;
  for (int i = 0, j = 1; pair_count < total_pairs; ++pair_count) {
    sum1_vec.push_back(ivec[i] + ivec[j]);
    i += 2;
    j += 2;
  }

  // Adding leftmost and rightmost elements
  pair_count = 0;
  for (int i = 0, j = ivec.size() - 1; pair_count < total_pairs; ++pair_count) {
    sum2_vec.push_back(ivec[i] + ivec[j]);
    ++i;
    --j;
  }

  // If vector is not divisible by 2, add the last element to the vector.
  if (ivec.size() % 2 != 0) {
    sum1_vec.push_back(ivec[ivec.size() - 1]);
    sum2_vec.push_back(ivec[ivec.size() / 2]);
  }

  // Printing added pairs
  cout << "Sum of adjacent pairs: ";
  for (auto elem : sum1_vec)
    cout << elem << " ";
  cout << "\n" << endl;

  cout << "Sum of leftmost and rightmost pairs: ";
  for (auto elem : sum2_vec)
    cout << elem << " ";
  cout << "\n" << endl;
  
  return 0;
}
