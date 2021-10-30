#include <stdio.h>
#include <iostream>
#include<string.h>
using namespace std;
int main() { 
    int account;     // account number 
    char name[ 30 ]; // account name 
    double balance;  // account balance 
    
    FILE *cfPtr;     // cfPtr = clients.dat file pointer 
 
    if ( ( cfPtr = fopen( "files/clients.dat", "w" ) ) == NULL ) {
        printf( "File could not be opened\n" );
    }  else { 
        printf( "Enter the account, name, and balance.\n" );
        printf( "Enter EOF to end input.\n" );
        printf( "? " );
        scanf( "%d%s%lf", &account, name, &balance );
        //write account, name and balance into file with fprintf 
        while ( !feof( stdin ) ) { 
            fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
            printf( "? " );
            scanf( "%d%s%lf", &account, name, &balance );
        }
        fclose(cfPtr);
	}
    if ( ( cfPtr = fopen( "files/clients.dat", "r" ) ) == NULL ) {
        printf( "File could not be opened\n" );
    }  else{ 
	    int max=0;
	    char maxSt[80];
        while(!feof(cfPtr)){
            fscanf(cfPtr,"%d%s%lf", &account, name, &balance );
            if(max<account){
                max=account;
                strcpy (maxSt, name);
            }//if
        }//while
		cout<<maxSt<<" is the customer with the max account "<<max<<endl;
		fclose( cfPtr ); 
    }//else
    return 0;
}//main