#include <stdio.h> 
#include <stdlib.h> 
int main( void ) { 
    FILE *stream; 
    char buffer[81];
    int i, ch; 
    /* Open file to read line from: */
    if( (stream = fopen( "files/random.txt", "r" )) == NULL ) {
        printf("File does not found.");
        exit( 0 );
    }
    /* Read in first 80 characters and place them in "buffer": */ 
    ch = fgetc( stream ); 
    for( i=0; (i < 80 ) && ( feof( stream ) == 0 ); i++ ) {
        buffer[i] = (char) ch; 
        ch = fgetc( stream ); 
    } 
    /* Add null to end string */ 
    buffer[i] = '\0';
    printf( "%s\n", buffer ); 
    fclose( stream );
    return 0;
} 
