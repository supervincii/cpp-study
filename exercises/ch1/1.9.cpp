#include <iostream>

int main()
{
  int i = 50, val = 0;
  while (i <= 100) {
    val += i;
    ++i;
  }

  std::cout << "The sum of 50 to 100 inclusive is " << val << std::endl;
  return 0;
}
