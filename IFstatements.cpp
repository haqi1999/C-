#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// if(condition) {}
// else if (condition) {}
// else (condition) {}
// DONT FORGET TO SEPERATE CURLY BRACKETS FROM EACH IF/ELSE
// || = or operator , only one is needed to be true for it to be a true statement
// && = and operator, both has to be true for it to be executed as a true statement
// < = Less than
// > = More than
// <= = Less than or equal to
// >= = more than or equal to
// == = equal tp
// != = not equal to
int main ()
{
    bool isMale = true;
    bool isFemale = true;
    bool isTall = true;

    if(isMale && isTall) // If true, it will execute this (Both has to be true, or it will go to else)
    {
        cout << "You are not gay and tall AF" << endl;
    }
         else if (isMale && !isTall)
          // the "!" basically negates the statement
          // "If isMale is true and isTall is not" 
         {
             cout << "You are a short male " << endl;

         }

         else if (!isMale && isTall) 
         {
             cout << "You are not male but tall" << endl;
         }
         
         else // If false, it will execute else at the end
    { 
        cout << "You are gay and short" << endl;
    }


    return 0;
}
// Ternary Operator example

// condition ? expression1 : expression2;
/* Here, condition is evaluated andif condition is true, expression1 is executed.
And, if condition is false, expression2 is executed.
The ternary operator takes 3 operands (condition, expression1 and expression2). Hence, the name ternary operator.*/

// string result = (marks >= 40) ? "passed" : "failed";
// cout << "You " << result << " the exam.";