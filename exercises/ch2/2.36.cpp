#include <iostream>

int main() {
    int a = 3, b = 4; // a = int; b = int
    decltype(a) c = a; // c = 3 (int)
    decltype((b)) d = a; // d = 3 (int&)
    ++c; // c = 4 (int)
    ++d; // d = 4 (int&) (increments a)
}