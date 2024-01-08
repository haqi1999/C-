#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// switch (Variable that is compared to the cases)
// case "Value/Number/Word that is compared to the variable" :
// Switch statements makes else if statements more easier
// break is important for each case to prevent multiple cases check at once.
// unless multiple cases are needed to be check, use break
// dont forget the columns NEXT TO EACH CASES AND DEFAULTS.
// The expression of a switch statement must be an integral type (int, char, short, long, long long, or enum).

string getDayofWeek (int dayNum) 
{
        string dayName;

        switch (dayNum) // dayNum is the Variable that is compared to all of the cases
        {
            case 0: //If dayNum is equal to "0"
                dayName = "Sunday";
                break; // 
            case 1:
                 dayName = "Monday";
                 break;
            case 2:
                 dayName = "Tuesday";
                 break;
            case 3:
                 dayName = "Wednesday";
                 break;
            case 4:
                 dayName = "Thursday";
                 break;
            case 5:
                 dayName = "Friday";
                 break;
            case 6:
                 dayName = "Saturday";
                 break;
            default: // Runs if none of the cases are true or valid.
                 dayName = "Invalid Number of days";

        }
        
        return dayName;
}
int main ()
{
    cout << getDayofWeek (0) << endl;


    return 0;
}