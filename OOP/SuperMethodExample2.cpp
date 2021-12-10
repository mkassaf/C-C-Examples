#include <iostream>  
using namespace std;

/**
 * In this example, there are two classes, both have a method called checkPassword, 
 * which checks if the password is stronge or not. 
 * The checkPassword in the parent class, return true if the password length is more than 7
 * In child class AdvPassword, there is an additional check which is the password should contain a number. 
 * So, the check password first calls the super method and then checks if the password conatins a number.
 * 
 */

class Password {  
    public:
    bool checkPassword(string password){    
        if(password.length() < 7){
            return false;
        }
        return true;
    }      
};   
class AdvPassword: public Password {    
    public:  
    bool checkPassword(string password){    
        if(!Password::checkPassword(password)){//Calling the super method from the parent
            return false;
        } else {
            bool containsNumber = false;
            for (int i = 0; i < password.length(); i++) {
                if(isdigit(password.at(i))){
                    return true;
                }
            }
            
        }
        return false;
    }     
};  
int main(void) {  
    Password pass;
    AdvPassword advPass;
    cout << pass.checkPassword("abd") << endl;//0
    cout << pass.checkPassword("abdcdefgh") << endl;//1

    cout << advPass.checkPassword("abd") << endl;//0
    cout << advPass.checkPassword("abdcdefgh") << endl;//0
    cout << advPass.checkPassword("abdcdefgh092") << endl;//1

    return 0;  
}  
/**
 * The output
 * This is an Animal
 * This is a Dog
 * 
 */