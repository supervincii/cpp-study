#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r; // a is an `int` (r is an alias for i which has type `int`)
    const int ci = i, &cr = ci;
    auto b = ci; // b is an `int` (top level `const` in ci is dropped)
    auto c = cr; // `c` is an `int` (`cr` is an alias for `ci` whose `const` is top-level)
    auto d = &i; // d is an `int*` (`&` of an `int` object is `int*`)
    auto e = &ci; // `e` is a `const int*` (`&` of a `const` object is a low-level `const`)
    const auto f = ci; // `f` is a `const int`
    auto &g = ci; // `g` is a const int& that is bound fo ci;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << *d << std::endl;
    std::cout << *e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;

    a = 42; // VALID: a is an `int`
    b = 42; // VALID: b is an `int`
    c = 42; // VALID: c is an `int`
    std::cout << "Assigning `42` to the variables." << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    d = 42; // INVALID: d is an int*; cannot assign int to an int*
    e = 42; // INVALID: e is a `const int*` and cannot be assigned with an `int` literal
    f = 42; // INVALID: f is a `const`
    g = 42; // INVALID: g is a const int& and ci is a const `int`. cannot modify ci;
    return 0;
}