/*
 * A template function use reference type argument 
 * to get and return the array size. 
 */
#include <iostream>
#include <cstdlib>
#include <array>
template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept
{
    return N;
}

int main(int argc, char const *argv[])
{
    int keyVals[] = {1, 3, 7, 9, 11, 22, 25};
    std::array<int, arraySize(keyVals)> mappedVals;
    /*output*/
    std::cout << mappedVals.size() << "\n";

    return 0;
}