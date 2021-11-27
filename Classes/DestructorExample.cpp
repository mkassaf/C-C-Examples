#include <stdio.h>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;
/**

A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.
A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).
The use of destructors is especially suitable when an object assigns dynamic memory during its lifetime to some of its variables, and at the moment of being destroyed we want to release that memory.

 * */

class Employee{
    public: 
        int* data;
        Employee(){
            cout << "Creating an array of 10" << endl;
            data = new int[10];
        }
        ~Employee(){
            cout << "Deleteing the array" << endl;
            delete [] data;
        }

};

int main() {  
    Employee emp;
    Employee emp2;
    return 0;  
} 