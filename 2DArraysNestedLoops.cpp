#include <iostream>
#include <cmath> // Math functions
#include <string> // Gives Access to functionalities from header file libraries 

using namespace std;
/* NameExample [][] = 2D arrays, the 2 square brackets are required to make a 2D Array.
2D Array = each individual element is another array.
in the first square brakets shows how many total elements are in the number grid array.
2nd square bracket shows how many elements are inside of each array element. */

// Nested for loops = For loops inside another for loops
int main ()
{
    int numbGrid [3][2] = 
    { 
        {1,2},{3,4},{5,6} 
        /*  each bracket is an element from the main array (3 Elements)
            each array contains 2 elements
            3 rows 2 columns */
    };

    for (int i = 0 ; i < 3 ; i++) // Responsible for the iteration of the rows.
    {
        for (int j = 0 ; j < 2 ; j++) // Responsible for the iteration of the individual elements
        {
            cout << numbGrid[i][j];
            // It won't exit this loop until is has printed both element in its respective rows.
        }
        cout << endl;
    }
    cout << numbGrid [2][0] << endl;
    // [Row index][Element index] (starts from 0)


    return 0;
}