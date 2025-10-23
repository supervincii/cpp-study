#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // c = 3 (int)
    decltype(a = b) d = a; // d = 4 (int&)

    return 0;
}