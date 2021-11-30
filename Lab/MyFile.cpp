#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

/**
 * In this lab you want to create a class for reading and writing a file. The class is called 
 * MyFIile which contains a list of public methods and private variables.  
 * This class writes into a binary file which contains integer numbers only. 
 * There are write and read functions that write and read one integer each time as seen in the example below.  
 * This class counts all write and read actions done by any object created from this class. 
 * For example, every time you read from the file, you should count this action as read action and same for write to the file.
 * See the example below which shows how your class will be called in the main function. 

*/
class MyFile{
    private:
        static int readAction;
        static int writeAction;
        FILE* file;
    public:
        MyFile(const char * path){
            file = fopen(path, "wb+");
        }
        bool open(const char * path){
            if(file != NULL)
                return false;
            file = fopen(path, "w+");
            return true;
        }
        FILE* getFile(){
            return this->file;
        }
        int getChar(){
            int ch;
            fread(&ch, 4, 1, this->file);
            if(ch!= EOF)
                this->readAction++;
            return ch;
        }
        void putChar(int c){
            this->writeAction++;
            fwrite(&c, 4, 1, this->file);
        }
        void reset(){
            fseek(this->file, 0, SEEK_SET);
        }
        void close(){
            if(file != NULL)
                fclose(this->file);
        }
        int getNumberOfReadActions(){
            return this->readAction;
        }
        int getNumberOfWriteActions(){
            return this->writeAction;
        }
        bool isEndOfFile(){
            return feof(this->file);
        }
        void operator<<(int ch){
            putChar(ch);
        }
        void operator>>(int& ch){
            ch = getChar();
        }
        ~MyFile(){
            cout << "Closing the file" <<endl;
            if(file != NULL)
                fclose(this->file);
        }
};
int MyFile::readAction = 0;
int MyFile::writeAction = 0;

int main() {  
    
    MyFile file("myFile.data");
    file.putChar(1);//Function write a char on the file
    file.putChar(2);
    file<<3;// An Operator Overloading to write to file
    file<<4;
    file.reset();
    cout << file.getNumberOfReadActions() << endl;//will print 0
    cout << file.getNumberOfWriteActions() << endl; //will print 4
    int ch;
    while(!file.isEndOfFile()){
        file>>ch;// An Operator Overloading to read from file and store in char
        cout << ch;
    }//will print 12341
    cout<<endl;
    file.reset();
    while(!file.isEndOfFile()){
        ch = file.getChar();//Function write to char on the file
        cout << ch;
    }//will print 12341
    cout<<endl;
    MyFile secondFile("myFile2.data");
    secondFile.putChar(100);
    secondFile.putChar(200);
    cout << secondFile.getNumberOfReadActions() << endl;//will print 10
    cout << secondFile.getNumberOfWriteActions() << endl; //will print 6
    return 0;  
}   




