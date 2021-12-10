#include <iostream>  
using namespace std;

class Parent { 
    
    int x=5;  
    public:
    int z;  
    void display()   { 
        cout << "display:Parent: Z: " << z << " X: " << x<<endl; 
    } 
    virtual void displayVer()   { 
        cout << "displayVer:Parent: Z: " << z << " X: " << x<<endl; 
    } 
};  
class Child: public Parent {  
    int y = 10;  
    public:  
    void display() {  
        cout << "display:Child: X: " << z<< " Y: " <<y<< endl;  
    } 
    void displayVer()   { 
        cout << "displayVer:Child: Z: " << z << " Y: " << y<<endl; 
    } 
};  


int main() {  
    
    Child ob1; 
    Parent *p1 = &ob1;//Or  new Child;
    ob1.z = 20;
    Parent ob2=ob1;
    ob1.z = 40;
    
    ob1.display();//display:Child: X: 40 Y: 10
    ob1.displayVer();//displayVer:Child: Z: 40 Y: 10

    ob2.display();//display:Parent: Z: 20 X: 5
    ob2.displayVer();//displayVer:Parent: Z: 20 X: 5

    p1->display();//display:Parent: Z: 40 X: 5
    p1->displayVer();//displayVer:Child: Z: 40 Y: 10

    return 0;  
}  

/**
 * In the above example, * a is the base class pointer. 
 * The pointer can only access the base class members but not the members of the derived class. 
 * Although C++ permits the base pointer to point to any object derived from the base class, 
 * it cannot directly access the members of the derived class. 
 * Therefore, there is a need for virtual function which allows the base pointer to access the members of the derived class.
 * 
 */