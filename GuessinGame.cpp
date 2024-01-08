#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

int main () 
{
    int InsertNum;
    int GuessinLimit = 3;
    int GuessinCount;
    int RightNum = 10;
    bool Limit = false;


    while (RightNum != InsertNum && Limit == false) // RightNum is not equal to InsertNum
    {
        if ( GuessinLimit != GuessinCount)
        {
        cout << "Enter Number";
        cin >> InsertNum;
        GuessinCount++;
        }
            else
            { 
            Limit = true;
           
            }

    }

        if (Limit)
        {
            cout << "You Lose";
        }
            else 
            {
                cout << "You Win!";
            }



    return 0;

}