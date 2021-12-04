#include <iostream>  
using namespace std;  
 class Account {  
   protected:  
   float salary = 60000;   
 };  
   class Programmer: private Account {  
   public:  
   float bonus = 5000;    
   void print(){
       cout << this->salary << endl;
   }
   };  

int main(void) {  
     Programmer p1;  
     p1.print();
     //cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  