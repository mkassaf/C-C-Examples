#include <iostream>  
using namespace std;

/**
 * 
 * Calling the super method
 * This is an example of calling the method in the parent class.
 * In below example, the print method in the Dog class is overritten by 
 * Calling the print method in the parent class, then adding a new lines.
 * 
 */
class Animal {  
    public:
    void print(){    
        cout << "This is an Animal\n"; 
    }      
};   
class Dog: public Animal {    
    public:  
    void print(){
        Animal::print();//Calling print(The super)  function in the parent 
        cout << "This is a Dog\n"; 
    }     
};  
int main(void) {  
    Dog d = Dog();  
    //The print method will call first the print in the parent class, 
    //Then it executes the reset of lines
    d.print();  

    return 0;  
}  
/**
 * The output
 * This is an Animal
 * This is a Dog
 * 
 */