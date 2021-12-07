#include <iostream>  
using namespace std;  
class Account {
  private:
    float tmp;
  protected:  
    float salary = 60000;   
  public:
    float age;
 };  
class Programmer: private Account {  
  public:  
    float bonus = 300;    
    void print(){
        cout << this->salary << endl;
        cout << this->age << endl;
        //cout << this->tmp << endl;//Uncommit this line will result a syntx error. 
        //The private members of the base class are never inherited.
    }
};  
class Tester: public Account {  
  public:  
    float overtime = 200;    
    void print(){
        cout << this->salary << endl;
        cout << this->age << endl;
        //cout << this->tmp << endl;//Uncommit this line will result a syntx error. 
        //The private members of the base class are never inherited.
    }
}; 

int main(void) {  
  Programmer p1;  
  p1.print();
  //cout<<"Salary: "<<p1.salary<<endl;//Object can not access to protected similar to private
  //cout<<"Age: "<<p1.age<<endl;//We are unable to access to age becase the inheritance is private, class Programmer: private Account.
  // changing it to class Programmer: public Account  will make age accessible
  cout<<"Bonus: "<<p1.bonus<<endl;   
  Tester t1;
  p1.print();
  cout<<"overtime: "<<t1.overtime<<endl;   
  cout<<"Age: "<<t1.age<<endl;   
  //cout<<"salary: "<<t1.salary<<endl;//Object can not access to protected similar to private
  return 0;  
}  