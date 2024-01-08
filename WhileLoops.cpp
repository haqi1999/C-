#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// while (Condition needed to be true for the while loop to run)
// "do While loop" execute the code first before checking the condition, unlike normal while loop
// While loop runs when a certain condition is true.
int main ()
{

    /*
    This is called do-while loop
    will execute atleast once even if the initial statement is false
    */
    int index = 6;
    do {
        cout << index << endl;
        index++;
    } while (index <=5); 



    /* 
    This is called while loop
     Will not execute if the statement is false 
    */
    while (index <=5) {// code does not work as there is 2 while loop in a dominant state, but should work individually.
        cout << index << endl;
        index++; // Counter variable, responsible for iterating the loop.
    }
    return 0;


}