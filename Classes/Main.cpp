#include <stdio.h>
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


class Employee{
    public: 
        int* data;
        Employee(){
            cout << "Creating an array of 10" << endl;
            data = new int[10];
        }
        ~Employee(){
            cout << "Deleteing the array" << endl;
            delete [] data;
        }

};

#include <thread>
void thread_function(){
    for (int i = -100; i < 0; i++)
        std::cout << "thread function: " << i << "\n";
}
int main(){
	std::thread t(&thread_function);
	for (int i = 0; i < 100; i++)
	    std::cout << "main thread: " << i << "\n";
	t.join();
	return 0;
}


