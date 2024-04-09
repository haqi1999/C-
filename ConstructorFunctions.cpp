#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;
// Constructors are used to initialise our objects with informations

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

    return 0;
}
// Next is object functions
/* 
-----------------------Extra Notes on Constructors-------------------------
Default Constructors - Constructors that takes no paramters

