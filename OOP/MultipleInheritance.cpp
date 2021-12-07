#include <iostream>  
using namespace std;  
class A  {  
    protected:  
     int a;  
    public:  
    void setA(int a){  
        this->a = a;  
    } 
    int getA(){
        return this->a;
    } 
};  
  
class B  {  
    protected:  
    int b;  
    public:  
    void setB(int b) {  
        this->b = b;  
    }  
    int getB(){
        return this->b;
    }
};  
class C : public A,public B  {  
   public:  
    void display() {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};  

//In the above example, class 'C' inherits two base classes 'A' and 'B' in a public mode.

int main() {  
   C c;  
   c.setA(10);  
   c.setB(20);  
   c.display();  
    return 0; 
}  