#include <iostream>  
using namespace std;


class Interface { 
    public:
        virtual void print() =0;
};  
class Implementation: public Interface {  
    public:
        void print(){
            cout << "Hello\n";
        }
    
};  

int main() {  

    Implementation ob0;
    //Interface par; or Interface par = ob0; is not allowed because Interface contains a unimplemented pure virtual method 
    Interface* par = new Implementation;

    ob0.print();
    par->print();

    return 0;  
}  
