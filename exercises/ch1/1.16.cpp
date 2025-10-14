#include <iostream>

int main()
{
  int i = 0, sum = 0;
  while (std::cin >> i && i != 0)
    sum += i;

  std::cout << "The sum of the inputs is: " << sum << std::endl;
  return 0;
}
