#include <iostream>  
using namespace std;


class Shape { 
    public:
        virtual void draw() = 0;
};  
class Rectangle: public Shape {  
    public:
        void draw(){
            cout << "Drawing a Rectangle"<< endl;
        }
};  

class Triangle: public Shape {  
    public:
        void draw(){
            cout << "Drawing a Triangle"<< endl;
        }
}; 

void callDraw(Shape *shape){
    shape->draw();
}
int main() {  
    
    //Shape *shape = new Shape;//This is not allowed
    Shape* rec = new Rectangle;
    Shape* triangle = new Triangle;

    callDraw(rec);//Drawing a Rectangle
    callDraw(triangle);//Drawing a Triangle

    return 0;  
}  