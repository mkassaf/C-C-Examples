#include <iostream>  
using namespace std;  

class Shape {  // Declaration of base class. 
    public:  
    int width;  
    int height;   
    void setData(int height,int width) {  
        this->height = height;
        this->width = width;  
    }  
};  
class Rectangle : public Shape  {  // inheriting Shape class  
    public:  
    int getArea() {  
        int result = this->height * this->width;  
        return result;  
    }  
};  
class Triangle : public Shape {      // inheriting Shape class  
    public:  
    int getArea() {  
        float result = 0.5 *this->height * this->width; ;
        return result;  
    }  
};  
int main() {  
    Rectangle r;  
    Triangle t;  
    int length,breadth,base,height;  
    cout << "Enter the length and breadth of a rectangle: " <<endl;  
    cin>>length>>breadth;  
    r.setData(length,breadth);  
    int m = r.getArea();
    cout << "Area of the rectangle is : " <<m<<endl;  
    cout << "Enter the base and height of the triangle: " <<endl;  
    cin>>base>>height;  
    t.setData(base,height);  
    float n = t.getArea(); 
    cout <<"Area of the triangle is : "  << n<<endl;  
    return 0;  
}  