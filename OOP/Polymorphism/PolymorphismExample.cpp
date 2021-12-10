#include <iostream>  
using namespace std;


class Shape { 
    public:
        virtual void print(){
            cout << "The area is shape"<< endl;
        }
};  
class Rectangle: public Shape {  
    public:
        void print(){
            cout << "The area is Rectangle"<< endl;
        }
};  

class Triangle: public Shape {  
    public:
        void print(){
            cout << "The area is Triangle"<< endl;
        }
}; 
int main() {  
    
    Shape *shape = new Shape;
    Shape* rec = new Rectangle;
    Shape* triangle = new Triangle;

    shape->print();//The area is shape
    rec->print();//The area is Rectangle
    triangle->print();//The area is Triangle

    return 0;  
}  