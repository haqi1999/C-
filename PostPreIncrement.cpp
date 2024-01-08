#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

int Number = 10;
int x = 10;
int x2 = 10;

int main (){
    
    cout << "Number" << endl;
    cout << "Hello"<< endl;
    int y = x++;
    int y2 = ++x;

    cout << y << " " << x << endl;
     cout << y2 << " " << x2 << endl;
    return 0;
}
// POST AND PRE INCREMENT EXAMPLE, IT DOES DIFFERENT THINGS
// For counter variable, it doesnt matter wether it is post or pre increment.