#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

// Getters and setters allows to control the access to the different attribute and different elements in classes
// Basically enforce validity of inputs to the code and to the class
// The example below shows restricting the inputs of the rating itself 
class Movie 
{
    private:// Only codes inside this class can access it, cannot be accessed outside the class
    string rating;
    public: // Any other code can access it outside this class
    string title;
    string director;
   
    Movie (string aTitle, string aDirector, string aRating)
    {
        title =  aTitle;
        director = aDirector;
        setRating(aRating); // Pass in aRating and making sure it goes through the setRating function.
    }

    void setRating (string aRating) // Everytime a rating is inputted, it has to go through this function
    {
        if(aRating == "G"|| aRating == "PG" || aRating == "R"|| aRating =="NR" )
        {
            rating = aRating;
        }
        else
        {
            rating = "NR"; // If rating is invalid, this will execute
        }
    }
    string getRating () 
    {
        return rating; // Extracts the rating from the void function since it cant be printed in the main body instantly
    }
};

int main ()
{
    Movie Avengers("Avengers","Joss Whedon", "PG-13");
    cout << Avengers.title();
    Avengers.setRating("PG"); // Changing the rating to PG
    cout << Avengers.getRating() << endl;
   

    // cannot do cout << Avengers.rating because the "rating" variable is in private
    // Instead it can be accessed through the public void setRating function like the one above


    return 0;
}
// Setters prohibits false inputs/malicious inputs
// Getters cant be changed, read only basically.