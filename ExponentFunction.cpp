#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// making a function so it can used to calculate number that is powered into something

int power (int baseNum, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum; 
        // this works because result has an initial value of 1
    }
    
    return result;
}
int main ()
{

    cout << power(5,2) << endl;
    return 0;

}