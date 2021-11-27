#include <stdio.h>
#include <iostream>
using namespace std;

struct student{char name[20]; int score;};
int main(){
	student s[10];
    int i;
    FILE * fptr=NULL;
    fptr=fopen ("files/students.bin", "wb");
    if (fptr==NULL)
        cout<<"file could not be opened\n";
    else{
        for(i=0;i<10;i++){
            cin>>s[i].name>>s[i].score;
        }//for
        fwrite(s,sizeof(s),10,fptr);
        fclose(fptr);
   }//else
    return 0;
}//main
