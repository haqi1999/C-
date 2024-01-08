#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

// Functions contains code that does stuff (Stores bunch of codes basically)
// void funtion does not return anything to the caller
// The function has to be called for it to work
// the code in the function can be re used multiple times
// Always put void before main. If after, make sure to copy paste the first line (with void) and put it above main (Prototype)
// function type name of funtion (Parameters) {} -> Definition of the funtion inside the curly brackets
// function type name of funtion (Arguements) -> Calling a function , declaration

void sayHii()
{
 cout << "Hello User ";

}

void MyName(string name, int age)
{
    cout << "Hello "<< name << " You are " << age <<  endl;
}


int main ()
{
    cout << "Top" << endl;

    sayHii();
    // This calls the void sayHii function basically
    // without this, there will be nothing printed on the terminal

    cout << "Bottom" << endl;

    MyName("Haqi", 21); 
    // "Haqi" is inputted into 'name' string as well as "21" into integer 'age'
    
    MyName("Max", 23); 
    MyName("Hamilton", 27); 
    MyName("Land0", 21); 
    // Can be repeated using the same funtion too 
    

    return 0;
}

// The value of the input into the funtion is a copy. It can only be changed if returned from that function and called again.

/*---------------------Default Parameters----------------------------------
    void message(string language = "C++") {
    :cout << "I like to code with " << language << "\n";
}
 
    int main() {
  // Function call without an argument
  message();    // Output: I like to code with C++
 
  // Function call with an argument
  message("Java");    // Output: I like to code with Java
  
        
----------Pass By Reference (Using Pointers to Change a variable)----------

void swap(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}
 
int main() {
  int first = 10;
  int second = 20;
 
  std::cout << "Before swap: " << first << " " << second << "\n";
 
  // Call the function and swap the values of first and second
  swap(first, second);
 
  std::cout << "After swap: " << first << " " << second << "\n";
}

Before swap: 10 20
After swap: 20 10 (Changes the "First" and "Second" Variable)


-----------------------------Overloading Function--------------------------
Function Overloading : Functions that has the same name (It can work!)

Function Differentioation : Atleast one of the following has to be true
1)Functions have different type of paramenters
2) Functions have different number of parameters

Overload Resolution : When the compiler tries to match the arguements to 
the function that has been overloaded by using function differentiation.

int add(int a, int b) {
  return a + b;
}
 
double add(double a, double b) {
  return a + b;
}
 
int main() {
  std::cout << add(3, 2);     // Calls add(int, int)
  std::cout << "\n";
  std::cout << add(5.3, 1.4);     // Calls add(double, double)
}

--------------------------Command Line Arguements------------------------
Passed on the main function ; main()
Used to control program from outside instead of hard coding those values 
inside.
Arguements are passed in point of execution not during run time.

*/
