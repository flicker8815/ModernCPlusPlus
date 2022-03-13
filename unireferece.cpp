/*
 * ParamType is Universal Reference.
 * Difference with argument is lvalue or rvalue.
 */
#include <iostream>
#include <cstdlib>
 template<typename T>
 void f(T&& param){}

int main(int argc, char const *argv[])
{
    int x = 27;
    const int cx = x;
    const int& rx = x;
    f(x);   // T is int&, param is int&.
    f(cx);  // T is const int&, param is const int&.
    f(rx);  // T is const int&, param is const int&.
    f(27);  // T is int, param is int&&.
    return 0;
}
