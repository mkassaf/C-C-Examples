#include <iostream>  

  
class Demo {  
    private:
        static int privStatic;
        static void PrintPrivateStatic(){
            /**
             * Static member functions have a class scope and they do not have access to the this pointer of the class.
             * You could use a static member function to determine whether some objects of the class have been created or not.
             * this->privStatic;// this is not allowed, becase static methods can access to this pointer.
            */
            std::cout <<" The private static var is::  " << privStatic << std::endl;
        }
    public:  
    int nonStaticVar;
    static int staticVar; 
    Demo(int x){  
        this->nonStaticVar = x;
    } 
    void showdata()  {  
        std::cout << "value of a is : " <<nonStaticVar<< std::endl;   
        std::cout << "value of a is : " <<staticVar<< std::endl; 
    }  
    static void printStatic(){
        /**
         * The static function is similar to static variable which is created when the application is run
         *  without a need to create an object from the class
         * The static method can be called directly using the class name
         * The static function can read the static variable only!!!!
         * Thus, he can't read nonStaticVar because the static function is created before creating objects 
         * and nonstatic variable is created when an object is created.
         * 
         */
        std::cout <<" The static var is::  " << staticVar << std::endl;
        //std::cout << nonStaticVar << std::endl; this line is not allowed, will throw an error.
    }
    void callPrintPriv(){
        PrintPrivateStatic();
    }
    void setPrivStatic(int x){
        this->privStatic = x;
    }
};  

int Demo::staticVar = 0;//You must initialize it
int Demo::privStatic = 0;//You must initialize it

int main()  {  
    Demo d1(1);
    Demo d2(2);
    d1.staticVar = 10;
    d1.showdata();// 1 and 10
    d2.showdata();// 2 and 10
    
    d1.nonStaticVar = 11;
    d1.staticVar = 20;

    d1.showdata();// 11, 20
    d2.showdata();// 2, 20

    Demo::staticVar = 30;

    d1.showdata();//11, 30
    d2.showdata();//2, 30

    /*****
     * As you can see the static var is a shared variable between all objects created by this class,
     * You can use the static variable without creating an object from class as below:
     * */

    std::cout<<Demo::staticVar << std::endl;//30
    Demo::staticVar = 40;
    std::cout<<Demo::staticVar << std::endl;//40
    //or
    Demo::staticVar++;
    std::cout<<Demo::staticVar << std::endl;//41

    Demo::printStatic();//You can call the method from the class
    d1.printStatic();//Or from the object
    d2.printStatic();

    /**
     * All these statments below are not allowed becasue the varibles and function are private.
    std::cout<<Demo::privStatic; 
    Demo::PrintPrivateStatic();
    d1.PrintPrivateStatic();
    d2.privStatic = 0; 

    */
   //You can call the private static variable and function indirectly 
    d1.setPrivStatic(20);// object d1 set the value of privStatic to 20
    d2.callPrintPriv();//d2 calls PrintPrivateStatic and will print 20 

    return 0;  
} 