#include <iostream>

int main()
{
  int x = 0, y = 0;
  std::cin >> x >> y;

  if (x < y) {
    int i = x + 1;
    while (i < y) {
      std::cout << i << std::endl;
      ++i;
    }
  }
  else {
    std::cout << "First input should be smaller than the second input." << std::endl;
    return 0;
  }

  return 0;
}
