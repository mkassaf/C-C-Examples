#include <iostream>  
  
using namespace std;  
/**
 * A friend class can access both private and protected members of the class in which it has been declared as friend.
 * In the below code, B is afriend class to A but not a via versa.
 * That means B can access both private and protected members of A 
 * but A CAN NOT access both private and protected members of B. 
 */   
class A  {  
    private:
        int x =5;  
        friend class B;// friend class.
};  
class B  { 
    private:
        int x;   
    public:  
        void display(A &a) {  
            cout<<"value of x is : "<<a.x << endl;  
        }  
};  

int main()  {  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}  