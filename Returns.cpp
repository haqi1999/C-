#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

// Anything after return will be not executed. Closing of a function

double cube(double num)
{
    double result = num*num*num;

    return result;
    // or can be "return num*num*num" istead of putting it in the variable
}

int main ()
{
    double answer = cube(5.0); //cube of 5 is stored in the variable "Answer"
    cout << answer << endl;
    // or can be "cout << cube(5.0) << endl;" instead of putting it in the "Answer" variable.

    return 0;
}
// a function will return anything
// this value for example, will then need to be assigned into a variable , or else its loss (Unable to use the returned value)
// The return type will be the same as the function type. Has to be the same

/*
    A return statement terminates the entire function 
    and resumes code execution at the point where the function was called. 
    Unlike break, return also returns something back to the caller.
*/

/* 
    A break statement is used to terminate a switch or loop, 
    and code execution will continue to the line after the switch or loop.
*/