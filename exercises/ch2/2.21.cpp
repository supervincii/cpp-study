#include <iostream>

int main() {
    int i = 42; // initializes an integer i to have a value of 42
    int *p1 = &i; // initializes an integer pointer p to the address of i, essentially pointing to i
    *p1 = *p1 * *p1; // dereferences p1 and multiplies (42 * 42) and assigns the new value to i (as p1 points to i)
    std::cout << i << " " << *p1 << std::endl; // 1764

    return 0;
}