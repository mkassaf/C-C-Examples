#include<iostream>
using namespace std;

/**
 * Reference : 
 * https://www.programiz.com/cpp-programming/increment-decrement-operator-overloading 
 * 
*/

class Point {
public:
   // Declare prefix and postfix increment operators.
   Point& operator++();       // Prefix increment operator.
   Point operator++(int);     // Postfix increment operator.

   // Declare prefix and postfix decrement operators.
   Point& operator--();       // Prefix decrement operator.
   Point operator--(int);     // Postfix decrement operator.

   // Define default constructor.
   Point() { _x = _y = 0; }

    void print();
   // Define accessor functions.
   int x() { return _x; }
   int y() { return _y; }
private:
   int _x, _y;
};


// Define prefix increment operator.
Point& Point::operator++() {
   _x++;
   _y++;
   return *this;
}

// Define postfix increment operator.
Point Point::operator++(int) {
   Point temp = *this;
   ++*this;
   return temp;
}


// Define prefix decrement operator.
Point& Point::operator--() {
   _x--;
   _y--;
   return *this;
}

// Define postfix decrement operator.
Point Point::operator--(int) {
   Point temp = *this;
   --*this;
   return temp;
}

void Point::print(){
    cout <<" X:: "<<this->x() << " ,Y:: " << this->y() << endl;
}

int main() {
    
    Point p1;
    p1.print();//0,0
    Point p2 = p1++;
    p2.print();//0,0
    p1.print();//1,1
    Point p3 = ++p1;
    p3.print();//2,2
    p1.print();//2,2
    p2 = p1--;
    p2.print();//2,2
    p1.print();//1,1
    p3 = --p1;
    p3.print();//0,0
    p1.print();//0,0

    return 0;
}