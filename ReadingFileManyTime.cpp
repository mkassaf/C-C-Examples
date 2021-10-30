#include <stdio.h>
int main(){
    char name[20];
    double avg;
    FILE * fptr=NULL;
    fptr=fopen("students.dat", "w");
    if (fptr==NULL){
        printf( "File could not be opened\n" );
    } else{
        fprintf(fptr, "%s %lf\n", "Ahmad", 80.3);
        fprintf(fptr, "%s %lf\n", "Sami", 92.0);
        fprintf(fptr, "%s %lf\n", "Rami", 95.4);
        fprintf(fptr, "%s %lf\n", "Qasem", 54.3);
        fprintf(fptr, "%s %lf\n", "Khalid", 84.5);
        fprintf(fptr, "%s %lf\n", "Tala", 47.31);
        fclose(fptr);
    }
    fptr=fopen("students.dat", "r");
    if (fptr==NULL){
        printf( "File could not be opened\n" );
    } else{
        int request = -1;
        
        printf("Enter you request:\n");
        printf("1- To get all avg greater than 90\n");
        printf("2- To get all avg between 80-89.99\n");
        printf("3- less than 60\n");
        printf("4- To Exit;\n");
        scanf("%d", &request);
        while (request != 5){
            switch (request) {
            case 1:
                printf("Name   Avarage\n");
                fscanf(fptr, "%s %lf\n", name, &avg);
                while (!feof(fptr)) {
                    if(avg >= 90){
                        printf("%s %lf\n",name, avg);
                    }
                    fscanf(fptr, "%s %lf\n", name, &avg);
                }
                break;
            case 2:
                printf("Name   Avarage\n");
                fscanf(fptr, "%s %lf\n", name, &avg);
                while (!feof(fptr)) {
                    if(avg < 90 && avg >= 80){
                        printf("%s %lf\n",name, avg);
                    }
                    fscanf(fptr, "%s %lf\n", name, &avg);
                }
                break;
            case 3:
                printf("Name   Avarage\n");
                fscanf(fptr, "%s %lf\n", name, &avg);
                while (!feof(fptr)) {
                    if(avg < 60){
                        printf("%s %lf\n",name, avg);
                    }
                    fscanf(fptr, "%s %lf\n", name, &avg);
                }
                break;
            default:
                printf("Request %d is invalide\n",request);
            }
            rewind(fptr);
            scanf("%d", &request);
        }
    printf("Closing the file. \nBye Bye\n");
    fclose(fptr);
  }
  return 0;
}//main


 


  

         





