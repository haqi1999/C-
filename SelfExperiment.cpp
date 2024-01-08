#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

string Partofyear (int Month)
{
    string whichpart;
    switch(Month)
    {
        case 12:
        whichpart = "December";
        break;

        case 1:
        whichpart = "January";
        break;

        default :
        whichpart = "Invalid Name of month";

    }
    return whichpart;


}

int main ()
{

    cout << Partofyear (12);

    return 0;
}