#include<iostream>
using namespace std;


class Integer {
    private:
        int value;
    public:
        Integer(){
            this->value = 0;
        }
        Integer(int value){
            this->value = value;
        }
        Integer(const char* strValue){
            this->value = 0;
            for (int i = 0; strValue[i]; i++)
            {
                this->value = this->value  * 10;
                this->value += strValue[i] - '0';
            }
        }
        int getValue(){
            return this->value;
        }
        bool equal(Integer obj){
            if(obj.value == this->value){
                return true;
            }
            return false;
        }
        const char * toSring(){
            int i = 0;
            int tmp = this->value;
            for (; tmp != 0; i++) {
                tmp = tmp/10;
            }
            char* valueStr = new char[i+2];
            
            valueStr[0] = '0';
            
            if(i == 0){
                valueStr[1] = '\0';
                return valueStr;
            }
            valueStr[i--] = '\0';
            tmp = this->value;
            for (; tmp != 0; i--)  {
                valueStr[i] = '0';
                valueStr[i] = valueStr[i] + tmp%10;
                tmp = tmp/10;
            }
            
            return valueStr;
        }
        Integer operator+(Integer obj) {  
            Integer tmp = *this;
            this->value += obj.getValue();
            return tmp;
        }
        bool operator==(Integer& ref) {  
            Integer *p = &ref; 
            if(this == p){
                return true;
            }
            return false;
        }
        void print(){
            cout <<this->value << endl;
        }
        
};


int main() {

    Integer value("0");
    Integer value2(10);
    Integer value3;

    value.print();//56
    value2.print();//10
    value3.print();//0

    int intValue = value.getValue();//56
    const char *strValue = value.toSring();//Return the number as string
    cout << "strValue : " << strValue << endl;
    value3 = value + value2;//66
    value.print();//56
    value3.print();//66
    //equal method compars the value of current object with given obj.
    cout << value3.equal(value) << endl;//0

    //Overload == operataor to compare based on the location in the memory,
    // the two object should be refer to same location to memory to return true;
    Integer value4("20");
    Integer value5(20);
    Integer* value6 = &value4;
    cout << (value4 == value5) << endl;//0
    cout << (value4 == *value6) << endl;//1
    cout << (value3 == value3) << endl;//1
    

    
    return 0;
}