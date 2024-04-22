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

    
    return 0;
    
}
