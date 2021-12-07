#include <iostream>  
#include "Person.h"

using namespace std;  


Person::Person(int age, string name){
    this->name = name;
    this->age = age;
}
void Person::setAge(int age){
    this->age = age;
}
void Person::setName(string name){
    this->name = name;
}
int Person::getAge(){
    return this->age;
}
string Person::getName(){
    return this->name;
}
void Person::print(){
    cout<< this->age << endl;
    cout << this->name << endl;
}