#include<iostream>
using namespace std;
/**
 * Point 1: 
 * The const variable specifies whether a variable is modifiable or not. The constant value assigned will be used each time the variable is referenced.
 *  The value assigned cannot be modified during program execution.
 * 
 * Point 2:  
 * A class is typically declared in a header file and a header file is typically included into many translation units. 
 * However, to avoid complicated linker rules, C++ requires that every object has a unique definition. 
 * That rule would be broken if C++ allowed in-class definition of entities that needed to be stored in memory as objects.
*/
class NormalClass {
    
    public:
        int value;
        const int constValue;
        const int constValue2 =10;//This initialization is not recommended!, see point 2 above.
        NormalClass(int value) : constValue(100){
            this->value = value;
        }
        void printNonConst() {
            cout << " Value: " << this->value <<  endl;
            cout << " constValue: " << this->constValue << " constValue2: " << this->constValue2 <<  endl;
        }
        void printConst() const {
            cout << " Value: " << this->value <<  endl;
            cout << " constValue: " << this->constValue << " constValue2: " << this->constValue2 <<  endl;
        }
};

int main() {

    NormalClass obj(3);
    obj.printConst();
    obj.printNonConst();

    const NormalClass obj2(10);
    obj2.printConst();
    //obj2.printNonConst();//not allowed
    return 0;
}