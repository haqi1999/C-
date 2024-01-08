#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

int main ()
{
    // it is important to put "[]" after the name of the array ot create one
    // use "[]" for indexing/extracting and Changing too, indexing starts with 0

    int LuckyNumbs[] = {4,5,32,10,8,6};
    LuckyNumbs [0] = 12;
    cout << LuckyNumbs [0] << endl;

    return 0;

}