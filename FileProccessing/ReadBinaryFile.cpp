#include<iostream>
#include <stdio.h>

using namespace std;
int main(){
	FILE * fptr=NULL;
	fptr=fopen("files/students.bin","rb");
	if (fptr==NULL){
        cout<<"File could not be opened\n";
    } else {
   	    int x[5];
        fread(x,sizeof(int),5,fptr);
		for(int i=0; i<5; i++){   		
			cout<<x[i] << endl;
		}
        fclose(fptr);
    }//else
    return 0;
}//main
