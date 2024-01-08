#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

int main ()
{
    int num1,num2;
    char op;

    cout << "Enter num1";
    cin >> num1;
    cout << "Enter num2";
    cin >> num2;
    cout << "Enter Operator";
    cin >> op;
    

    int result;
    if (op == '+')
    {
        result = num1+num2;

    }
        else if (op == '-')
        {
            result = num1 - num2;
        }
             else if (op == '/') 
        {
                result = num1/num2;
        } 
                else if (op == '*')
        {
                    result = num1*num2;
        }
                    else 
         {
                        cout << "Invalid Operator" << endl;
         }
    
    cout << result << endl;

    return 0;
}