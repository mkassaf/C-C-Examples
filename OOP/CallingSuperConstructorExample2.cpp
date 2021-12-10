#include <iostream>  
using namespace std;

/**
 * @brief 
 * Calling constructors methods in sub class
 *
 * Base class constructors are automatically called for you if they have no argument. 
 * If you want to call a superclass constructor with an argument, 
 * you must use the subclass's constructor initialization list. 
 * Unlike Java, C++ supports multiple inheritance (for better or worse), 
 * so the base class must be referred to by name, rather than "super()".
 * 
 */

class Parent { 
    private:
        int x;
    public:
        Parent(){
            this->x = 0;
            cout << "X: "<<this->x<<endl;
            
        }
        Parent(int x){
            this->x = x;
            cout << "X: "<<this->x<<endl;
        }
};  
class Child: public Parent {  
    private: 
        int y;
    public:
        Child(){
            this->y = 0;
            cout << "Y: "<<this->y<<endl;
            
        }
        // Call the superclass constructor in the subclass' initialization list.
        Child(int x, int y):Parent(x){
            this->y = y;
            cout << "Y: "<<this->y <<endl;
        }
    
};  

int main() {  
    Child ob0(5,6);

    Child ob1;
    return 0;  
}  

/**
 * The output
 * X: 5
 * Y: 6
 * X: 0
 * Y: 0
 */
