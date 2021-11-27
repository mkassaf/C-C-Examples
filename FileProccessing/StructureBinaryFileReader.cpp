#include <stdio.h>
#include <iostream>
using namespace std;
struct student{char name[20]; int score;};
int main(){
	student s;
	int i;
	FILE * fptr=NULL;
	fptr=fopen("files/students.bin", "rb");
	if (fptr==NULL){
        cout<<"File could not be opened\n";
    } else{
        while(!feof(fptr)){
            fread(&s,sizeof(s),1,fptr);
            cout<<s.name<<" | "<<s.score << endl;
        }//while
        fclose(fptr);
    }//else
     return 0;
}//main



