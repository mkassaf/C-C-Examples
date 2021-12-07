#include <iostream>  
using namespace std;  

 

int main() { 

    double array[5][5];
    double *current, *init;
    init = &array[0][0];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            current = &array[i][j] ;
            array[i][j] = (1+ current-init) * sizeof(double);

        }
        
    }
    cout<< array[4][4] << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<< array[i][j] << " " ;

        }
        cout << endl;
        
    }
    cout << sizeof(array) << endl;
    return 0;  
}  