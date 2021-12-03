#include<iostream>
using namespace std;

class NormalClass {
    
    public:
        int value;
        static const int constValue;
        static const string CLASS_NAME;
   
        static void printNonConst() {
            cout << " constValue: " << constValue <<  endl;
            cout << " CLASS_NAME: " << CLASS_NAME <<  endl;
        }
        void printConst() const {
            cout << " constValue: " << this->constValue <<  endl;
            cout << " CLASS_NAME: " << this->CLASS_NAME <<  endl;
        }
};

const int NormalClass::constValue = 10;
string const NormalClass::CLASS_NAME = "NormalClass";

int main() {
    
    NormalClass::printNonConst();
    cout << NormalClass::constValue << endl;
    cout << NormalClass::CLASS_NAME << endl;

    NormalClass ob1;
    NormalClass ob2;
    ob1.printConst();
    ob2.printNonConst();

    if(ob1.constValue == ob2.constValue){
        cout <<"ob1.constValue == ob2.constValue is always true" << endl;
    }

    //const NormalClass ob3;//Will throw error because there is no constructor initialize the const variable

    return 0;
}