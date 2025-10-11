#include <iostream>

int main()
{
  std::cout << "Enter 2 numbers with the first number less than the second number" << std::endl;
  int x = 0, y = 0;
  std::cin >> x >> y;
  int i = x + 1;
  while (i < y) {
    std::cout << i << std::endl;
    ++i;
  }

  return 0;
}
