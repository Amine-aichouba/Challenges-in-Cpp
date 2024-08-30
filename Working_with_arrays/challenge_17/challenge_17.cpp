#include <iostream>

using namespace std;

void clear_screen () 
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

int main ()
{
    const int matrix_lines = 3 , matrix_columns = 3 ;
    int matrix [ matrix_lines ][ matrix_columns ] , sum = 0 ;
    

    cout << "\n\t\t * Enter matrix items :" << endl ;
    for ( int i = 0 ; i < matrix_lines ; i ++ ) 
        {
            for ( int j = 0 ; j < matrix_columns ; ++ j )
                {
                    cout << "\n\t\t * T [" << i + 1 << "][" << j + 1 << "] : " ;
                    cin >> matrix [i][j] ;
                }
        }

    cout << "\n\t\t * Matrix elements : \n\t\t\t\t\t" ;
    for ( int i = 0 ; i < matrix_lines ; i ++ ) 
        {
            for ( int j = 0 ; j < matrix_columns ; ++ j )
                {
                    cout << matrix [i][j] << " " ;
                    sum += matrix [i][j] ;
                }

            cout << "\n\t\t\t\t\t" ;       
        }
    
    cout << "\n\t\t * Sum of matrix elements : " << sum ;

    cout << endl ;

    return 0 ;
}
