#include <iostream>
#include <string>
#include <type_traits>
using std::cout;
using std::endl;
template <typename T>
T helper(const T &l, const T &r)
{
    static_assert(!std::is_same<T,std::string>::value, "You can't use std::string here");
    return l + r;
}

int main(int argc, char *argv[]) {
    int i1 = 1, i2 = 1;
    double d1 = 1.0, d2 = 1.0;
    std::string s1 = "1", s2 = "1";
    cout << helper(i1, i2) << endl;
    cout << helper(d1, d2) << endl;
    cout << helper(s1, s2) << endl;
    return 0;
}