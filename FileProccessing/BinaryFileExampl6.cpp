#include <stdio.h>
#include <iostream>
using namespace std;

struct student{char name[20]; int score;};
int main(){
	student s[10];
    int i;
    FILE * fptr=NULL;
    fptr=fopen ("files/students.bin", "rb");
    if (fptr==NULL) {
        cout<<"File could not be opened\n";
    } else {
        fread(s,sizeof(s),10,fptr); 
        for(i=0;i<10;i++){
            cout<<s[i].name<<"   "<<s[i].score << endl;
        }//for
        fclose(fptr);
    }//else
    return 0;
}//main
