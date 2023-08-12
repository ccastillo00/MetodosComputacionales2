#include <iostream>

using namespace std;


class Student
{
    //private:
    //    int age;
        
    public:
    	int age;
    	Student(){
    		age = 24;
    	}
    	
};

int main() {
    
    Student mario;
    cout << mario.age;
    return 0;
}



