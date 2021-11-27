#include <stdio.h>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

/* 
A pointer to a C++ class is done exactly the same way as a pointer to a structure
 and to access members of a pointer to a class you use the member access operator -> operator,
  just as you do with pointers to structures. 
Also as with all pointers, you must initialize the pointer before using it.
*/
class Employee{
    public: 
        int* data;
        int id;//data member (also instance variable)   
        string name;//data member(also instance variable)
        float salary;
        Employee(){
            cout << "Creating an array of 10" << endl;
            data = new int[10];
        }
        Employee(int i, string n, float s){ 
            id = i; 
            name = n; 
            salary = s;
            data = new int[10];
        } 

        ~Employee(){
            cout << "Deleting the array" << endl;
            delete [] data;
        }
        void display() { 
           cout<<id<<"  "<<name<<"  "<<salary<<endl; 
        }
};

int main() {  
    Employee e1 = Employee(1, "Ahmad", 2500.5);
    Employee* e2;
    e2 = &e1;
    e2->display();
    e2 = new Employee(2, "Rami", 500.5);
    e1.display();
    e2->display();
    delete e2;
    return 0;  
}   

