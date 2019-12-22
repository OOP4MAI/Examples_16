#include <iostream>

static void print(int x, int y)
{
    std::cout << "(" << x << ", " << y << ")\n";
}

int main()
{
    constexpr auto call_cart ([](auto f, auto x, auto ...rest) constexpr {
        std::cout << "cal_cart:" <<  sizeof ... (rest) << std::endl;
        (void)std::initializer_list<int>{
            (((x < rest)
                ? (void)f(x, rest)
                : (void)0)
             ,0)...
        };
    });

    constexpr auto cartesian ([=](auto ...xs) constexpr {
        return [=](auto f) constexpr {
            std::cout << "cartesian:" << sizeof ... (xs) << std::endl;
            call_cart(f,  xs...);
           // (void)std::initializer_list<int>{
           //     ((void)call_cart(f,  xs...), 0)
           // };
        };
    });

    constexpr auto print_cart (cartesian(4, 2, 3,4,5,6));

    print_cart(print);
}
