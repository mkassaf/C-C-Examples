#include <iostream>  
using namespace std;  


class User {
    private:
    int tmp;

    public:
    int id;
    void printId(){
        cout << "Id is " << id << endl;
    }
    void print(){
        cout << "I am User class [The parent]" << endl;
        cout << "Id is " << id << endl;
        cout << "Name is " << name << endl;
    }

    protected:
    string name;
};

class AdminUser : public User{

    public:
    int adminId;
    void setName(string name){
        this->name = name;
    }
    void print(){
        cout << "I am AdminUser class [The child]" << endl;
        cout << this->id << endl;
        cout << this->name << endl;
        cout << this->adminId << endl;
    }
    
};

class SuperAmdinUser : public AdminUser
{
private:
    /* data */
public:
    int superAdminId;
    void print(){
        cout << this->id << endl;
    }
};

void callPrint(User user){
    cout << "===== call print function inside User object===\n"; 
    user.print();
    cout<<"================================\n";
}

int main(){

    AdminUser adminUser;
    adminUser.id = 10;//public

    //user.name = "Yazan";//beacuse this var is protocted
    adminUser.setName("Yazan");
    adminUser.adminId = 20;

    //user.print();//I am AdminUser class [The child]
    


    User normalUser;
    normalUser.id = 33;//public
    //normalUser.name = "Ammar";
    //normalUser.adminId;//Error
    //normalUser.print();//I am User class [The parent]

    User generalUser;
    //User = AdminUser
    //AdminUser = User
    generalUser = adminUser; 

    callPrint(adminUser);
    callPrint(normalUser);

    return 0;
}