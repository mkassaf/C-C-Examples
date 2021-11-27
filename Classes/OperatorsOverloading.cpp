#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;


class Point{
  public:
       int x;
       int y;
       Point(int x, int y){
           this->x = x;
           this->y = y;
       }
       void printData(){
           cout << this->x << " " << this->y << " ";
           cout << "\n-------------------------\n";
       }
       bool operator==(Point point) {  
            cout<<"Operators Overloading for ==";  
            if(this->x == point.x && this->y == point.y){
                return true;
            }
            return false;
        }  
};


int main() {  
    
    Point p1(12,12);
    Point p2(12,12);

    if(p1 == p1){
        cout << "Equal !!!" << endl;
    }
   
    return 0;  
}  