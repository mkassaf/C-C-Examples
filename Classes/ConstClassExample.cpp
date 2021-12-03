#include<iostream>
using namespace std;

class NormalClass {
    
    public:
    int value;
        
    NormalClass(int v = 0) {
        cout<< "Use the default value .. " << endl;
        value = v;
    }
    void setValue(int value){
        cout <<"Value before:: "<<this->value << endl;
        this->value = value;
        cout <<"Value after:: "<<this->value << endl;

    }
    void showMessage() {
        NormalClass *p = this;
        p->value = 10;
        cout<<"showMessage: value is " << this->value<<endl;
    }
    void display() const {
        //NormalClass *p = this;// Not allowed
        //value = 4;
        cout<<"display: Value is:: "<<this->value<<endl;
    }
};

/**
 * Whenever an object is declared as const, it needs to be initialized at the time of declaration. 
 * however, the object initialization while declaring is possible only with the help of constructors.
 * 
 * A function becomes const when the const keyword is used in the function’s declaration. 
 * The idea of const functions is not to allow them to modify the object on which they are called. 
 * It is recommended the practice to make as many functions const as possible so that accidental changes to objects are avoided.
*/
int main() {
   //Constant object are initialised at the time of declaration using constructor
    const NormalClass ob1;
    //ob1.showMessage();//Error occurred if uncomment :: the object has type qualifiers that are not compatible with the member function "NormalClass::showMessage" -- object type is: const NormalClass
    //ob1.setValue(5);//Error occurred if uncomment: the object has type qualifiers that are not compatible with the member function "NormalClass::setValue" -- object type is: const NormalClass
    //ob1.value = 10;//Error occurred if uncomment

    cout << ob1.value << endl;//Can read it
    ob1.display();//Can call const function only

    NormalClass ob2;// This is a non-const object
    ob2.showMessage();
    ob2.value = 20; 
    cout << ob2.value<< endl;
    ob2.display();
    ob2.setValue(30);
    ob2.display();
    return(0);
}