#include <stdio.h>
#include <iostream>
using namespace std;

struct student{char name[20]; int score;};
int main(){
	student s;
	FILE * fptr=NULL;
	fptr=fopen("files/students.bin", "rb");
	if (fptr==NULL) {
        cout<<"file could not be opened";
    } else {
		int max=0;
		char maxSt[80];
        while(!feof(fptr)){
		    fread(&s,sizeof(s),1,fptr);
		    if(max<s.score){
			    max=s.score;
			    strcpy(maxSt,s.name);
		    }
        }//while
	    cout<<maxSt<<" is the student with the highest score: "<<max << endl;
      fclose(fptr);
    }//else
    return 0;
}//main
