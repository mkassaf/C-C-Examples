#include <iostream>  
using namespace std;


class Shape { 
    protected:
        int base;
        int height;
    public:
        Shape(int base, int height){
            this->base = base;
            this->height = height;
        }
        virtual int getArea() =0;
        void printArea(){
            cout << "The area is " << getArea() << endl;
        }

};  
class Rectangle: public Shape {  
    public:
        Rectangle(int width, int height): Shape(width, height){
            //Calling the shape constructor 
        }
        int getArea(){
            return base * height;
        }
};  

class Triangle: public Shape {  
    public:
        Triangle(int base, int height): Shape(base, height){
            //Calling the shape constructor
        }
        void printArea(){
            cout << "The is a Triangle" << endl;
            Shape::printArea();
        }
        int getArea(){
            return base * height /2;
        }
}; 
int main() {  
    
    Rectangle rec(5,4);
    Triangle tran(5,4);

    rec.printArea();//The area is 20
    tran.printArea();//The area is 20

    //Shape sh;//object of abstract class type "Shape" is not allowed
    Shape *shape = new Triangle(6,3);
    shape->printArea();//9

    return 0;  
}  
/**
 * The outpu
 * The area is 20
 * The is a Triangle
 * The area is 10
 * The is a Triangle
 * The area is 9
 */