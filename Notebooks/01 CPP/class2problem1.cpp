#include <iostream>

int main() {
    int a = 2147483647;
    std::cout << a << std::endl;
    int b = a + 2;
    std::cout << b << std::endl;
    //int c = -2147483648 - 1;
    //std::cout << c << std::endl;
    return 0;
}
