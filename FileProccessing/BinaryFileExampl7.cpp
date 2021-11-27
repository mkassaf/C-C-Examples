#include <stdio.h>
#include <stdlib.h>
struct student{ int id; int m1; int m2; float avg; };
int main(){
	struct student std[10];
	struct student tmp[10];
	int i;
	FILE *f;
	
//1. Initialize the structure from the keyboard
	for(i=0; i<3;i++){
		printf("Please enter data for std[%d]: ",i);
		scanf("%d%d%d", &std[i].id, &std[i].m1, &std[i].m2);
		std[i].avg = (float) (std[i].m1 + std[i].m2)/2;
	}
//2. Display the data on the screen
	printf("\n\n//The data stored in the structure are\n");
	for(i=0; i<3;i++){
		printf("%d %d %d %4.2f\n", std[i].id, std[i].m1, 	std[i].m2,std[i].avg);
	}

//3.Open a file for write to store data into it
	if((f=fopen("files/binarydata.txt","wb"))== NULL){
		printf("Unable to open data.txt\n");
		exit(0);
	}
	//4.Store data into the file binarydata.txt
	printf("\n\nData has been saved in the file\n");
	for(i=0; i<3;i++){
		fwrite(&std[i], sizeof(std), 1, f);		
	}
	fclose(f);
	// Now, initialize tmp structure from the file
	if((f=fopen("files/binarydata.txt","rb"))== NULL){
		printf("Unable to open files/binarydata.txt\n");
		exit(0);
	}
	for(i=0; i<3;i++){
		fread(&tmp[i],sizeof(tmp),1,f);
	}
	printf("\n\n//The contents of the file is\n");
	for(i=0; i<3;i++){
		printf("%d %d %d %4.2f\n", tmp[i].id, tmp[i].m1, tmp[i].m2, tmp[i].avg); 
	}
	fclose(f);
    return 0;
}
