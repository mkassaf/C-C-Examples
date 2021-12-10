#include <iostream>  
using namespace std;


class Parent { 
    private:
        int x;
    public:
        Parent(){
            cout << "Calling constructor in Parent\n";
            x=0;
        }
        Parent(int x){
            this->x = x;
        }
        void print(){
            cout <<"X: " << x << endl;
        }
};  
class Child: public Parent {  
    private:
        int y;
    public:
        Child(){
            cout << "Calling constructor in Child\n";
            y=0;
        }
        Child(int x, int y) : Parent(x){
            this->y = y;
        }
        void print(){
            Parent::print();
            cout << "Y: "<< y << endl;
        }
    
};  


int main() {  
    
    Child ob0;
    ob0.print();
    Child ob1(4,5);
    ob1.print();


    return 0;  
}  
