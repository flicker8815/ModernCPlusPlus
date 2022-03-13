/*
 * A function use auto type parameter 
 * to get the array size. 
 * 
 * Use of ‘auto’ in parameter declaration only 
 * available with -std=c++14 or -std=gnu++14
 */
#include <iostream>
#include <cstdlib>
constexpr std::size_t arraySize(auto& arr) noexcept
{
    std::cout << sizeof(arr) << "\n";
    return sizeof(arr);
}

int main(int argc, char const *argv[])
{ 
    const char name[] = "hello world";
    arraySize(name);
    return 0;
}