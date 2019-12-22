#include <iostream>

//*
template<typename... Args>
void iterate3(Args... args) {
    int a[sizeof...(args)] = {args...};
 //   int a[sizeof...(args)] = {(std::cout << args, 0)...};
    

  //  int a[3] = {(std::cout << 1, 0), (std::cout << 2.0, 0), (std::cout << "tri", 0)};
    //int a[sizeof...(args)] = {(std::cout << args << ", ", 0)...};

    std::cout << std::endl;

    for(auto i:a) std::cout << '[' << i << ']' << std::endl;
}
//*/

auto main() -> int{
    std::cout << (1,2) << std::endl;
    std::cout << (std::cout << "1+2=",2) << std::endl;

    iterate3(1,2,3,4,5);
    return 1;
}