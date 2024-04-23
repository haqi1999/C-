#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

int main ()
{
    // it is important to put "[]" after the name of the array ot create one
    // use "[]" for indexing/extracting and Changing too, indexing starts with 0
    // And use {} to initialise the content of the array once the array have been declared
    // NB : The size of an array cannot be changed after it have been declared.
    // Index in array start at 0.

    int LuckyNumbs[] = {4,5,32,10,8,6};
    LuckyNumbs [0] = 12;
    cout << LuckyNumbs [0] << endl;

    /* Multidimensional Arrays
        2 D Array can be created by using [][] with arrangement for rows and columns respectively.
        NB : Initialising the elements is different than MATLAB. Recall that in MATLAB you only 
        need to use semi-colon for the next row.
    */
       int table[3][5] = {
          {0, 1, 2, 3, 4} ,      /* initializers for first row */
          {5, 6, 7, 8, 9} ,      /* initializers for second row */
          {10, 11, 12, 13, 14}   /* initializers for third row */
        };

    /* Iterating in Arrays
        Use for loops to do so. Make sure iterate to one less than the length of the array as the 
        indexing starts from 0.
    */
    
        int fibonacci[5] = {0, 1, 1, 2, 3};
        for (int i = 0; i < 5; i++) {
          std::cout << fibonacci[i];
        } // Outputs: 01123
    
    /* for-each loops
        using for loops but the indexing is the use of the array element itself as the following
    */
    
        int fibonacci[5] = {0, 1, 1, 2, 3};
        for (int num: fibonacci) {
          std::cout << num;
        } // Outputs: 01123

    /* Nested loops for traversing through Multidimensional arrays
    NB : the outside loop is responsible for iterating the row in an array while the inside loop is
    responsible for the columns in an array
    */

        char game[3][3] = {
          {'x', 'o', 'o'} , 
          {'o', 'x', 'x'} , 
          {'o', 'o', 'x'}  
        };
        
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            std::cout << game[i][j];
          }
          std::cout << "\n";
        } 
        /* output
            xoo
            oxx
            oox
        */


    
    
    return 0;
    
}
