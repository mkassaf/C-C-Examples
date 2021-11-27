#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;


class Employee{
  public:
       int *age;
       double salary;
       char name[30];
      
       Employee(const char *name, int age, double salary){
           this->age = new int;
           cout << "Calling parameterized constructor \n";
           *this->age = age;
           strcpy(this->name, name);
           this->salary = salary;
       }
       Employee(Employee & employee){
          cout << "Calling the copy constructor. \n";
          this->age = new int;
          *this->age = *employee.age;
          strcpy(this->name,employee.name);
          this->salary = employee.salary;
      }
       Employee& operator = (const Employee &employee) {
        cout<<"User defined Assignment operator called "<<endl;
           this->age = new int;
          *this->age = *employee.age;
          strcpy(this->name,employee.name);
          this->salary = employee.salary;
        return *this;
       } 
       void printData(){
           cout << *this->age << " " ;
           cout << this->name << " ";
           cout << this->salary;
           cout << "\n-------------------------\n";
       }
};



int main() {  
    
    Employee emp("Ahmad",32, 2000);
    Employee emp2("",0, 0);

    emp2 = emp;//Calls the defult copy assignment
    *emp.age = 7;
    emp.printData();//7 Ahmad 3000
    emp2.printData();//7 Ahmad 2000
//When we changed age in emp, it was changed in emp2 because both point to same memory
//on the other hand, when we change salary on emp, emp2 was not changed.
    return 0;  
}   




