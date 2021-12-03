#include <stdio.h>  
#include "Simple.h"  
#include "Simple.h"  

/**
 * In the above code, we have included the header file twice but it will not throw any error. 
 * Since we have specified the condition in the header file that if the header file is included then the header file should not be included again. 
 * 

#ifndef my_header_file  

#define my_header_file 

.....

#endif 

 * When the program control comes to the second statement of #include "header.h" then it will not include this header file again.  
*/

int main() {  
    printf("The value of a is : %d\n", a);  
    return 0;  
}   