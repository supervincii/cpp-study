#include <iostream>

int main() {
    int val1 = 1;
    int *p = &val1;
    std::cout << *p << std::endl;

    // change the value of the pointer
    int val2 = 2;
    p = &val2;
    std::cout << *p << std::endl;

    // change the value to which the pointer points
    *p = 10; // val1 which p points to is now 10
    std::cout << *p << std::endl;

    return 0;
}