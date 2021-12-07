#include <iostream>  

using namespace std; 

#ifndef my_header_file  
#define my_header_file  

class Person{
    private:
        int age; 
        string name;
    public: 
        void setAge(int age);
        void setName(string name);
        int getAge();
        string getName();
        Person(int age, string name);
        void print();
};

#endif