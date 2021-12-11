
#include <iostream>  
using namespace std;  

/**
 * The idea of this example is to show the main difference between Inheritance vs. Aggregation 
 * The user has the address properties such as city and country, but the address is not a user 
 * So the relationship is aggregation because the user has an address but the address is not the user and the user is not just an address 
 * Admin user has the properties of the user and an additional property called role 
 * Since the admin user is a custom case of user, then the relationship is the inheritance
 * 
 */
class Address {
    protected:
    string country;
    string city;
    int postalCode;
    public:
    Address(){}
    Address(string country, string city, int postalCode){
        this->city = city;
        this->country = country;
        this->postalCode = postalCode;
    }
    void print(){
        cout<<"Countery: " << this->country << endl;
        cout<<"City: " << this->city << endl;
        cout<<"Postal Code: " << this->postalCode << endl;
    }
};

class User{
    protected:
    int id;
    string name;
    Address address;//The user has an address (Aggregation)
    public:
    User(int id, string name, Address address){
        this->id = id;
        this->name = name;
        this->address = address;
    }
    void print(){
        cout<<"Id: " << this->id << endl;
        cout<<"Name: " << this->name << endl;
        this->address.print();
    }

    
};

class AdminUser: public User{//Admin User is a user with an additional property(Inheritance)
    protected:
    string role;
    public:
    AdminUser(int id, string name, Address address, string role):User(id, name, address){
        this->role = role;
    }
    void print(){//Overiding the print function and calling the super
        User::print();//Calling the super function in the pranet
        cout<<"Role: " << this->role << endl;
    }
};


int main() {  

    Address address("Palestine", "Jenin", 972);
    AdminUser admin(1,"Rami",address, "Head Of Dept");

    admin.print();
    return 0;  
}  
/**
 * The output
  
    Id: 1
    Name: Rami
    Countery: Palestine
    City: Jenin
    Postal Code: 972
    Role: Head Of Dept
 * 
 */