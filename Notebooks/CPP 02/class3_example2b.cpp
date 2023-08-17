#include <iostream>

void swapNums(int* ptrX, int* ptrY){
  int z = *ptrX;
  *ptrX = *ptrY;
  *ptrY = z;
}

int main(){
    int a = 3;
    int b = 4;
    std::cout << a << " " << b << std::endl;
    swapNums(&a, &b);
    std::cout << a << " " << b << std::endl;
    return 0;
}

