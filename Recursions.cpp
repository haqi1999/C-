#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

// When a functions calls itself until the condition is met within the funtion.\
// 
int factorial (int n)
{
    if (n>1)
    {
        return n*factorial(n-1); //  Calls itself aka Recursions
    }
    else 
    {
        return 1l; // It wont exit the function unless it reaches less than 1, it will keep looping
    }
}

int main ()
{
 int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;

    return 0;
}