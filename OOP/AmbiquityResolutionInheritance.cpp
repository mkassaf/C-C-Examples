#include <iostream>  
using namespace std;  
class A {  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B {  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
}; 

class C : public A, public B {  
    void view() {  
        //display();//error: member 'display' found in multiple base classes of different types
        A::display();
        B::display();
        
    }  
};

int main() {  
    C c;  
    //c.display();//error: member 'display' found in multiple base classes of different types 
    
    c.B::display();
    c.A::display();
    return 0;  
}  