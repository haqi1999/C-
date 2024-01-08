#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

class Book{

    private:
    string title;
    string author;
    string publisher;
    
    public:
    bool stockposition;
    double price;
    double requiredcopy;

    Book(string Aauthor, string Apublisher){
        author = Aauthor;
        publisher = Apublisher;
    }

    Book (){
        author = "Invalid Input";
        publisher ="Invalid Input";
        stockposition = "Invalid";
    }
    
    void Checkstock (string stockposition){
        if (stockposition == true){
            cout << "Book is Available" << endl;
            cout << "Book Details"<< endl;
            cout << "Enter number of copied required" << endl;
            cin >> requiredcopy

        }
        else {
            cout << "Book is Not Available" << endl;
        }
        
        
    }

    void Checkcopy (double requiredcopy){
        if (requiredcopy <= 10){
            cout << "Total cost" << endl;
        }
        else {
            cout << "Not Available in Stock/Too Much Copies" << endl;
        }
    }
}

int main (){




    return 0;
}