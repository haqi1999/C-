#include <iostream>
#include <cmath> // Math functions
#include <string>


using namespace std;
// cin is used for user input, can be used for Character and Integer
// getline is used for inputting strings
// It is possible to use one "cin" for multiple inputs of the same type of data types
// cin >> num1 >> num2 (used for 2 inputs stored in variable num1 and num2) 

int main ()
{

    int num1, num2; // 2 variables stored as integer
    int age;
    int birthyear;
    string name;

    cout << "Enter your age and Birthyear :  ";
    cin >> age >> birthyear; // Birth year will always be the 2nd input

    cout << "What is your name? ";
    getline(cin,name); // check this AGAIN
    
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
    cout << "You are born in " << birthyear << endl;



    return 0;
}