#include <iostream>
#include <cmath> // Math functions
#include <string> // 3 preprocessor Libraries

using namespace std;
// Class = New Data Type.
// Existing data types = int, char, double.
// OOP = Object-Oriented Programming (Classes and objects are the back bone of OOP)
// Object = Actual instance of the class created.
// Attributes : Member variables, object inside a class
// By default, all members are in Private Access Specifiers

class Book // Contains blueprint of the 'Book' Data Type
{
    public: // this is called access specifier
        string title; 
        string author;
        int pages;
}; // Dont forget semicolon after curly brackets of the class

int main ()
{
    Book book1; // Object
    book1.title = "Harry Potter";
    book1.author = "J.K";

    Book book2; // Object
    book2.title = "LORD OF DA RINGS";
    book2.author = "Tolkein";


    book1.pages = 500;
    double pi = 3.14;
    char favoriteLetter = 'G';
    
    cout<< book1.title << endl;
    cout << book2.title << endl;
    

    return 0;
}
// Next is Constructors!!!!!!!!
/*
------------------Defining Methods Outside of a Class---------------------
ClassName :: 

i.e)
class School {
// we'll explain 'public' later
public:
  std::string name;
  int age;
 
  void banner();
};

void School::banner() {
  std::cout << name << " is " << age << " years old.\n";
}