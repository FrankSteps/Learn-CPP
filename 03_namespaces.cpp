#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = -1;
}

int main(){
    int x = 0;

    std::cout << first::x;
    std::cout << second::x;
    std::cout << x;

    return 0;
}