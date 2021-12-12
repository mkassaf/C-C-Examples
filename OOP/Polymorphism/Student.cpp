#include <iostream>

using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
public:
    Student();
    void printInfo();
    void updateInfo(int, string, int);
    ~Student();
};

Student::Student() {
}

Student::~Student()
{
}
