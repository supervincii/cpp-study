#include <iostream>

int main()
{
    int input_value;
    std::cin >> input_value;
    // std::cin >> int input_value;
    // ERROR: extraction operator (>>) expects an lvalue (an already declared variable)

    double i = { 3.14 };
    // int i = { 3.14 };
    // ERROR: list initialization does not allow narrowing

    double wage;
    double salary = wage = 9999.99;
    // double salary = wage = 9999.99;
    // ERROR: `wage` needs to be initialized first

    int i = 3.14;
    // OK: narrowing will happen turning `i` to 3

    return 0;
}