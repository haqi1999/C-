#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// inherit other class functionality to another class
// just put ":public nameofclass" next to the class that wants to inherit it
// space between the colon and the type/name of the class is important as it will affect the code itself
// the existing funtion in a class can be overrided in another class even if it has the same name
// Sub class inherit from the Super Class
class Chef 
{
    public:
        void makeChicken () 
        {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes bbq ribs" << endl;
        }

}; 

class ItalianChef :public Chef //Inheriting functionality from Chef
{
    public:
    void makePasta()
    {
        cout << "Italiano Pasta Abragado" << endl;
    }
    void makeSpecialDish() // Overides the special dish from the Normal Chef even if it has the same function name
     {
         cout << "Pizza" << endl; 
     }
};
int main ()
{
    Chef chef; // Making a new variable "chef" with the new class "Chef"
    chef.makeChicken();
    chef.makeSpecialDish();
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta ();
    italianchef.makeSpecialDish();

    // Only the Italian chef can make the pasta and not the normal chef

    return 0;
}