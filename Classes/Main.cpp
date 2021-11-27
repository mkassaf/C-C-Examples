#include <stdio.h>
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


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
    Student s;
    return 0;  
}   

