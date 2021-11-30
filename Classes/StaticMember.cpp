#include <iostream>
using namespace std;
/**
 * When a function inside a class is declared as static, 
 * it can be accessed outside the class using the class name and scope resolution operator (::), without creating any object.
 * A static member method has access only to the static members of the class, we can not call any non-static functions inside it.
 * All objects in the class share the same copy of the static function. It is useful in manipulating global static variables, which are again shared by all objects.
 * Since the static function is not bounded by the object of the class, it does not has access to the this keyword.
 * 
*/
class Nokia{
private:
    /*
        *declaring variable as staric, so that-
        *it will be accessible to the static functions
    */
    static string phone_name;   
public:
    //static function I
    static void name(){
        cout << "Phone: "<< phone_name;
    }
    
    //static function II
    static void set_name(string name){
        phone_name = name;
    }
};
 
//Initializing private static member
string Nokia::phone_name = "";
 
int main()
{
    //no object jas been created
    //accessing static function directly with class name
    Nokia::set_name("Nokia 2600");
    Nokia::name();
 
    return 0;
}

/**
 * Output:
 * Phone: Nokia 2600
 * 
 * In the above program, we are setting a string static variable via a static function without creating any object, 
 * because the static variable (phone_name) cannot be set through a non-static method.
 * In this tutorial, we learned what a static function is, how to create and use it in the C++ programming language.
 * 
 **/ 

