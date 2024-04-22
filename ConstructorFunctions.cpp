#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// Constructors are used to initialise our objects with informations
// Destructors are used when an object is destroyed. 

class Book // Contains blueprint of the 'Book' Data Type
{
    public:
        string title;
        string author;
        int pages;

        Book (string aTitle, string aAuthor, int aPages) // Example of a Constructor
        {
            title = aTitle;
            author =aAuthor;
            pages = aPages;
        }

        Book () //This constructor is used if no info are inserted into 'Book', Default Constructor
        {
            title = "No title";
            author = "No author";
            pages = 0;
        }
        /* Alternative way to print out the results in the Book inserted
        void summary() {
            std::cout << title << " Book Title " << author << " Name of author.\n";
        */
}; // Dont forget semicolon after curly brackets of the class

int main ()
{
    Book book1("Harry Potter","J.K", 500); // Object
    Book book2 ("LORD OF DA RINGS", "Tolkein", 700); // Object
    Book book3;

    double pi = 3.14;
    char favoriteLetter = 'G';
    
    cout<< book1.title << endl;
    cout << book2.title << endl;
    cout << book3.title << endl;
    cout << book1.author << endl;
   // book1.summary();

    return 0;
}
// Next is object functions

/* 
-----------------------Extra Notes on Constructors-------------------------
Default Constructors - Constructors that takes no paramters
Constructor can be defined outside class definition using ; "ClassName :: "
Derived class = Child Class
Base Class = Parent Class (Classes that was inherited from)
*/
    
i.e) //Constructor made outside the class
House::House() {
  location = "New York";
  rooms = 5;
}

i.e)  // A constructor acting as default and a constructor with paramteters
class House {
private:
  std::string location;
  int rooms;

public:
  // Constructor with default parameters
  House(std::string loc = "New York", int num = 5) {
    location = loc;
    rooms = num;
  }

  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }
};

/* 
NB: When calling a constructor with multiple default parameters, 
the compiler will match the arguments starting from the leftmost parameter. Therefore
a constructor call like this is not possible because it skips over the first parameter:
*/
House big_house(10);    // Error: no constructor to handle House(int)

/* 
A Member Initiliser list is required when dealing with const values or reference variables.
Since these data types needs to be initialised first before declaring it in the code. The 
Member initialiser list begins with a colon ":",and then lists each attribute and the 
initial value for that attribute. Each attribute in the list is separated by a comma. 

NB: Don’t forget to add the brackets {} after the member initializer list!
Any code can still be placed into the constructor body.
*/

I.e ) // Following code won't work sice the reference variables have not been initialised
class Book {
    private:
      const std::string title;
      const int pages;
    public:
      Book() {
        title = "Diary";    // Error: const variables can't be assigned to
        pages = 100;    // Error: const variables can't be assigned to
      };

I.e) // Solution to the above problem
class Book {
private:
  const std::string title;
  const int pages;
public:
  Book() 
    : title("Diary"), pages(100) {} // Member initializer list
};

/* Constructor Inheritance
The derived class can inherit the constructor of it base class. A derived class can also
initialise the private attributes of its base class by using the base class constructor 
in a member initialiser list
*/
i.e) // Example of Constructor Inheritance
#include <iostream>

// Base class
class Animal {
private:
  std::string gender;
  int age;

public:
  Animal(std::string new_gender, int new_age)
    : gender(new_gender), age(new_age) {}
};

// Derived class
class Dog: public Animal  {
private:
  std::string breed;

public:
  // Call base class constructor
  Dog(std::string new_gender, int new_age, std::string new_breed)
    : Animal(new_gender, new_age), breed(new_breed) {}

  void sound() {
    std::cout << "Woof\n";
  }
};

int main() {
  // Calls Dog(string, int, string) constructor
  Dog buddy("male", 8, "Husky");
  
  // Output: Woof
  buddy.sound();

  return 0;
}

/* Multilevel Inheritance/Chain Inheritance
The "most base" class is alwaysa constructed first. The order of class construction goes
from the parent to the child. All attributes in a chain inheritance a derived class 
contains all attributes from all the base classes before it
*/


/*
--------------------------- Notes on Destructors --------------------------------------
Like a constructor, it has the same name as the class and no return type, but is preceded
by a ~ operator and takes no parameters:
*/

I.e ) // 
class House {
private:
  std::string location;
  int rooms;

public:
  // Constructor with default parameters, print in ascending order
  House(std::string loc = "New York", int num = 5) {
    location = loc;
    rooms = num;
  }

  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }

  // Destructor
  ~House() {
    std::cout << "Moved away from " << location; // Print in descending order
  }
};
/*
An object of the class with its  "location" attribute set to "New York" 
Will output " Moved away from New York".
NB: Objects are destroyed in the reverse order of their creation.
*/


