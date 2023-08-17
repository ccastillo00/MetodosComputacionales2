// Your First C++ Program

#include <iostream>

int main() {
    int* ptrA = new int(100);
    std::cout << ptrA << std::endl;
    std::cout << *ptrA << std::endl;
    delete ptrA;
    return 0;
}