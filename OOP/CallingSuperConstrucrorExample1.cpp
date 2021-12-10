#include <iostream>  
using namespace std;


class Parent { 

    public:
        Parent(){
            cout << "Calling constructor in Parent\n";
        }
};  
class Child: public Parent {  

    public:
        //the constructor is non-parameterized, then it will be called automatically with the derived class
        Child(){
            cout << "Calling constructor in Child\n";
        }
    
};  

int main() {  
    //This line calls the constuctor in Child which is by default calls the default constrcuor in the parent 
    Child ob0;
    return 0;  
}  
