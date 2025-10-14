#include <iostream>

int main()
{
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;
  std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;

  std::cout << "Now printing numbers from 10 to 0." << std::endl;
  for (int j = 10; j >= 0; --j)
    std::cout << j << std::endl;
  
  return 0;
}
