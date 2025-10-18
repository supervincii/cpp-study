#include <iostream>

int main() {
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    // The program will print.
    // ri = 10 is the same as i = 10
    // Output: 10 10

    return 0;
}