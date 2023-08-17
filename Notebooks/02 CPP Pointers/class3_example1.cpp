#include <iostream>

int main() {
    int a = 4;
    std::cout << a << std::endl;
    int* ptrA = &a;
    std::cout << ptrA << std::endl;
    *ptrA = 5;
    std::cout << a << std::endl;
    std::cout << ptrA << std::endl; 
    return 0;
}
