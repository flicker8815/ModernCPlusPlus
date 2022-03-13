#include <boost/type_index.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>

template<typename T>
void showType(const T& param) 
{
    using std::cout;
    using boost::typeindex::type_id_with_cvr;
    cout << "T =     "
         << type_id_with_cvr<T>().pretty_name()
         << '\n';

    cout << "param =     "
         << type_id_with_cvr<decltype(param)>().pretty_name()
         << '\n';
}

std::vector<int> createVec() 
{
    std::vector<int> vec = {0, 1, 2};
    return vec;
}

int main(int argc, char const *argv[])
{
    const auto vw = createVec();
    if(!vw.empty()) {
        showType(&vw[0]);
    }

    return 0;
}
