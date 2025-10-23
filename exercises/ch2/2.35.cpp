#include <iostream>

int main() {
    const int i = 42; // i = const int
    auto j = i; // j = int
    const auto &k = i; // k = const int&
    auto *p = &i; // p = const int*
    const auto j2 = i, &k2 = 1; // j2 = const int, k2 = const int&
}
