/*
 * A template function use decltype and trailing return type
 * to return indicate type.
 * 
 */
#include <iostream>
#include <cstdlib>
#include <vector>

/* c++14 */
template<typename Container, typename Index> 
decltype(auto)
authAndAccess(Container&& c, Index i)
{
    return std::forward<Container>(c)[i];
}

/* 
 *    c++11
 *    template<typename Container, typename Index> 
 *    auto
 *    authAndAccess(Container&& c, Index i)
 *    -> decltype(std::forward<Container>(c)[i])
 *    {
 *        return std::forward<Container>(c)[i];
 *    }
 */

std::vector<std::string> returnVec(void) {
    std::vector<std::string> vec = {"hello world1", "hello world2", "hello world3"};
    return vec;
}

int main(int argc, char const *argv[])
{
    std::vector<int> vec = {0, 1, 2, 3};
    std::cout << authAndAccess(vec, 1) << "\n";
    authAndAccess(vec, 1) = 5;
    std::cout << authAndAccess(vec, 1) << "\n";

    /* rvalue argument */
    std::string s = authAndAccess(returnVec(), 1);
    std::cout << s << "\n";
    return 0;
}