#include <iostream>    
using namespace std;    
class Box {    
    private:    
        int length; 
        friend void setLength(Box&, int); //friend function       
    public:    
        Box(): length(0) { }    
        friend int printLength(Box); //friend function 

};    
int printLength(Box b) {
    return b.length;    
}  
void setLength(Box &b, int len) {
        b.length = len;
} 

void print(Box b) {
    /**
     * Uncomment the below line will throw an error because this is not a friend function,
     *  so it can not read private or protected variable   
     */ 
    //cout << b.length; 
}
int main(){    
    Box b;   
    cout<<"Length of box: "<< printLength(b)<<endl; //0   
    setLength(b, 20);
    cout<<"Length of box: "<< printLength(b)<<endl; //20  
    return 0;    
}    