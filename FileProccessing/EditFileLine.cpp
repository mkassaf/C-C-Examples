#include<iostream>
#include <string.h>
#include<stdlib.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;
int main() {
    FILE *stream;
    char name[100];
    float avg;
    if( (stream = fopen( "files/students.dat", "r+" )) != NULL ) {
        int i = 0;
        while (!feof(stream)) {
            
            
            fscanf(stream, "%s %f\n", name, &avg);
            int size = ftell (stream);
            fseek( stream, size, SEEK_SET );
            avg = avg +3.0;
            fputs(name,stream);
            //fprintf(stream, "%s %f\n", name, avg);
            printf("%s %f\n", name, avg);
            if(i++ > 4){
                break;
            }
        }
       fclose( stream );
    } else {
        printf("File is not found!.");
    }
   
}
