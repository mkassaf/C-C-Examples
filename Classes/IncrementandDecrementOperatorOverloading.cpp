#include <iostream>
using namespace std;

class Check {
  private:
    int i;
  public:
    Check(): i(0) {  }

    //++obj
    Check operator ++ ()  {
        ++this->i;
        return *this;
    }

    // obj++, Notice int inside barcket which indicates postfix increment.
    Check operator ++ (int) {
        Check temp;
        temp.i = i++;
        return temp;
    }
    //--obj, 
    Check operator -- ()  {
        --i;
        return *this;
    }

    //obj --,  Notice int inside barcket which indicates postfix increment.
    Check operator -- (int) {
        Check temp;
        temp.i = i--;
        return temp;
    }

    void Display() { 
        cout << "i = "<< i <<endl; 
    }
};

int main() {
    Check obj, obj1;    
    obj.Display();  //0
    obj1.Display(); //0

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = ++obj;
    obj.Display(); //1
    obj1.Display(); //1

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;//1
    obj.Display();//2
    obj1.Display();//1

    obj1 = --obj;

    obj.Display();//1
    obj1.Display();//1


    return 0;
}