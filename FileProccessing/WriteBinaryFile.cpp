#include<iostream>
#include <stdio.h>

using namespace std;
int main(){
	FILE * fptr=NULL;
	fptr=fopen("files/students.bin","wb");
	if (fptr==NULL){
        printf( "File could not be opened\n" ); 	
	} else{
        int x;
		for(int i=0; i<5; i++){  		
	        cin>>x;
   	        fwrite(&x,sizeof(int),1,fptr);
			cout << x << endl;
		}//for
        fclose(fptr);
    }//else
	return 0;
}