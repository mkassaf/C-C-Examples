#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Student {
    public:
        virtual void print() =0;
       
};

class Master : public Student{
    public:
        void print(){
            cout << "I am master student" << endl;
        }
};
class BA : public Student{
    public:
        void print(){
            cout << "I am BA student" << endl;
        }
};

void run(Student* s){
    s->print();
};

int main(){
    
    Student* st = new Master();
    
    run(st);
    
    Student* st2 = new BA();

    run(st2);

    delete st;
    delete st2;
    return 0;
}//main
