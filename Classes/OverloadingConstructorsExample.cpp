#include <stdio.h>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


class Employee{
   private:
       int size;
   public:
       int* data;
       Employee(){
           cout << "Default constructor, created array of 10 and initialize the data with -1" << endl;
           this->size = 10;
           data = new int[this->size];
           for (int i = 0; i < this->size; i++){
               data[i] = -1;
           }
       }
       Employee(int size){
           cout << "Parameterized constructor that takes the size as int param"<<
           ", created an array using the given size and initialize the data with 0" << endl;
           this->size = size;
           this->data = new int[size];
           for (int i = 0; i < this->size; i++){
               data[i] = 0;
           }
       }
       Employee(int* array, int size){
           cout << "Parameterized constructor that takes two params"<<
           ", created an array using the given size and copy the given array to data" << endl;
           this->size = size;
           this->data = new int[size];
           for (int i = 0; i < this->size; i++){
               data[i] = array[i];
           }
           data = array;
       }
       void showData(){
           cout << "The data is : : " << endl;
           for (int i = 0; i < this->size; i++){
               cout << data[i];
           }
           cout << "\n_____________________________" << endl;
       }
       ~Employee(){
           cout << "Deleting the array" << endl;
           delete [] data;
       }
};


int main() {  
    int data[] = {1,2,3,4,5};
    Employee emp;
    Employee emp2 = Employee(10);
    Employee emp3 = Employee(data, 5);
    emp.showData();
    emp2.showData();
    emp3.showData();
    return 0;  
}   




