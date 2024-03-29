#include <iostream>
#include <utility>
// without initializer list
template <class T> void print (T&& val){
    std::cout << val << std::endl;
}

template <class T, class ... REST> void print (T&& val, REST ... rest){
    print(val);
    print(rest...);
}

//with initializer list
//   https://www.experts-exchange.com/articles/32502/None-recursive-variadic-templates-with-std-initializer-list.html
template <class ...T> void print_il(T&& ...val){
    (void) std::initializer_list<int>{ (std::cout << val << std::endl,0) ...};
}

auto main() -> int{
    print(1,3.2,"hello",'x');
 
    int a{10};
    print_il(std::move(a),3.2,"hello",'x');
    
}