#include <stdio.h>
int main() {
   int account;     /* account number */
   char name[ 30 ]; /* account name */
   double balance;  /* account balance */
 
   FILE *cfPtr;     /* cfPtr = clients.dat file pointer */

   if (( cfPtr = fopen( "files/clients.dat", "a" )) == NULL) {//Mode is a which mean appends
        printf( "File could not be opened\n" );
   } else {    
       printf( "Enter the account, name, and balance.\n" );
       printf( "Enter EOF to end input.\n" );
       printf( "? " );
       scanf( "%d%s%lf", &account, name, &balance );
        //write account, name and balance into file with fprintf
       while ( !feof( stdin ) ) {
           fprintf( cfPtr, "%d %s %lf\n", account, name, balance );
           printf( "? " );
           scanf( "%d%s%lf", &account, name, &balance );
       }
       fclose( cfPtr );
   }
}
