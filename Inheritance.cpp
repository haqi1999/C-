#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// inherit other class functionality to another class
// just put ":public nameofclass" next to the class that wants to inherit it
// space between the colon and the type/name of the class is important as it will affect the code itself
// the existing funtion in a class can be overrided in another class even if it has the same name
// Sub class inherit from the Super Class. Derived Class inherit from Base Class.
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

/* Types of Inheritance
Public Inheritance : Access specifiers of the base class members stay the same in the derived class. Most common type.
Protected Inheritance : public and proteced members of the base class become protected members of the derived class.
Private Inheritance : All base class members become private members of the derived class
*/

/* Polymorphism
When a derived class override methods from its base class. This is due to same name given to the method in the derived 
class like it was in the base class. It will prioritise the method in each own respective classes even if it has inherited
a method with the same name from the base class. NB : Name of the method have to be the same.
*/

i.e) // Example of Polymorphism
#include <iostream>

class Animal {
public:
  void action() {
    std::cout << "The animal does something.\n";
  }
};

class Fish: public Animal {
public:
  void action() { 
    std::cout << "Fish swim.\n"; // Method "actiom" is polymorphismed into "Fish Swim" here
  }
};

class Bird: public Animal {
public:
  void action() {
    std::cout << "Birds fly.\n"; // Method "actiom" is polymorphismed into "Birds fly" here
  }
};

int main() {
  Animal newAnimal;
  Fish newFish;
  Bird newBird;

  newAnimal.action();
  newFish.action();
  newBird.action();

  return 0;
}
