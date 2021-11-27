#include <stdio.h>
#include <iostream>
using namespace std;
struct student{char name[20]; int score;};
int main(){
    student s;
    int i;
    FILE * fptr=NULL;
    fptr=fopen("files/students.bin","wb");
    if (fptr==NULL){
        cout<<"File could not be opened\n";
    } else {
        for(i=0;i<10;i++){
            cin>>s.name>>s.score;
            fwrite(&s,sizeof(s),1,fptr);
        }//for
        fclose(fptr);
    }//else
    return 0;
}//main



