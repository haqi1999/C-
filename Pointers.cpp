#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// Pointers = memory addresses, By using "&" beside a variable 
// To create a pointer variable, put "*p" beside the name of the pointer variable.
// Don't forget to assigned what type of pointer variable it will be.
// Dereferencing pointer = extracting the value from the variable pointer itself (by putting "*" beside the pointer variable)
int main ()
{
    int age = 19;
    int *pAge = &age; // Pointer Variable Created
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age << endl; // prints out the memory address where 19 is stored. a.k.a pointers.
    cout << pAge << endl; // Pointer stored in pAge
    cout << *pAge << endl; // Dereferencing pointer from pointer variable
    cout << *&gpa << endl; // Dereferencing pointer from original variable
    cout << &*&gpa << endl; // Back to Pointer
    return 0;
}

// the 0x in memory address indicates HexaDecimal
// if you insert an address of a variable to a function, that function can directly change the value of the variable through the address. If you give the function a normal variable, that function will only get a copy of the actual variable, and any changes made in the function will not affect the real value unless returned.
// int* InputPointer = Input pointer is used to point to an actual integer value which can be changed/modified.