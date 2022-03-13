/* Explicityly typed initializer idiom */
#include <iostream>
#include <cstdlib>
int main(int argc, char const *argv[])
{
    auto pi = 3.14159;
    auto inteArea = static_cast<int>(pi * 3 * 3);
    std::cout << inteArea << "\n";
    return 0;
}
