#include <iostream>  
using namespace std;  
 
  class Account {  
    public:  
      float salary = 60000;
      
      void printSalary(){
        cout << "Salary is : " <<salary<<endl;
      }
      void print(){
        printSalary();
      }

 };  
  class Programmer: public Account {  
    public:  
      float bonus = 5000;    
      void printBonus(){
        cout << "Bonus:: " << bonus << endl;
      }
      void print(){
        Account::printSalary();
        printBonus();
      }
  };  

int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    

     p1.printSalary();
     p1.printBonus();
     
     p1.print();
    return 0;  
}  