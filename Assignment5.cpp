#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;


class Item{
    private: 
        int id;
        string name;
        double price;
    public:
        Item(){}
        Item(int id, string name, double price){
            this->id = id;
            this->name = name;
            this->price = price;
        }
};
class Order{
    private:
        Item item;
        int quantity;
    public:
        Order(Item item, int qantity) {
            this->item = item;
            this->quantity = quantity;
        }
};



int main() {  
    
  
    return 0;  
}   




