#include <iostream>  
using namespace std;  

class A {  
    protected:  
    int a;  
    public:  
    void setA(int a){  
       this->a = a;  
    }  
};  
  
class B : public A {  
    protected:  
    int b;  
    public:  
    void setB(int b) {  
        this->b = b; 
    }  
};  
class C {  
    protected:  
    int c;  
    public:  
    void setC(int c) {  
        this->c = c;  
    }  
};  
  
class D : public B, public C {  
    protected:  
    int d;  
    public:  
    void mul() {  
        setA(4);  
        setB(5);  
        setC(6);  
        std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;  
    }  
};  

int main() {  
    D d;  
    d.mul();  
    return 0;  
}  