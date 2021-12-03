int main() {
    
    NormalClass::printNonConst();
    cout << NormalClass::constValue << endl;
    cout << NormalClass::CLASS_NAME << endl;

    NormalClass ob1;
    NormalClass ob2;
    ob1.printConst();
    ob2.printNonConst();

    if(ob1.constValue == ob2.constValue){
        cout <<"ob1.constValue == ob2.constValue is always true" << endl;
    }

    //const NormalClass ob3;//Will throw error because there is no constructor initialize the const variable

    return 0;
}