#include <iostream>
#include <cmath> // Math functions

using namespace std;

//Make sure to build first in terminal before running the code
//Semicolon seperates each line of code

int main () //An example of function, a collection of code 
{
    /* ------------------------------ Divider ------------------------------ */
    //VARIABLES
    // String = Plain Text (string)
    // Integer = Whole Number (int)
    // Float = Stores decimals points (float)
    // Double = Store more decimals points (double) (More accurate that float)
    // Character = stores 1 character (char)
    // Boolean = True/False Value (boolean)
    // Constant = When we dont use variables (Constant Value)
    // 2 ways to make variable 
    // put "const" before the type of the variable to prevent it to get changed later on.


    string characterName = "Haqi";
    string phrase = "Giraffe Academy";
    string phraseSUB = phrase.substr(8,3);
    phrase [0] = 'B';   
    cout << phraseSUB << endl;

    int characterAge;
    characterAge = 21;
    const string Name = "Haq"

    char grade = 'A';
    double gpa = 2.1;
    bool isMale = false;

    /* ------------------------------ Divider ------------------------------ */
    // NUMBERS
    // % = Modulus Operator, gives the remainder from a division
    // BODMASS is applied in this program (Order of Operations)
    // ++ = incrementing by 1 to the variable
    // -- = Decrementing by 1 to the variable
    // += Adding a value to the varibale
    // -= Substracting from the variable with the input value
    // pow(base,power) = (2,5) = 2 to the power of 5
    // sqrt (number) = Square root of the number
    // round (number) = round the number 
    // ceil (number) = round up the number to the highest integer no matter what
    // floor (number) = vice versa of ceil
    // fmax (number1,number2) = shows which is the higher value
    // fmin () = Vice versa of fmax
    // Use decimal numbers for a more accurate value in math operations
    // If integer used, only the whole number is given on the answer, even if the answers should have include a decimal


    cout << "NUMBERS" << endl;

    cout << 10 % 3 << endl;
    int WholeNum = 5;
    double DeciNum = 5.65;

    WholeNum++;
    cout << WholeNum << endl;

    DeciNum+= 80;
    cout << DeciNum << endl;

    cout << 5/4 << endl;
    cout << 5.0/4.0 << endl;
    cout << pow(2,5) << endl;
    cout << sqrt(36) << endl;
    cout << round (4.5) << endl;
    cout << ceil (4.1) << " Ceil" << endl;
    cout << floor(4.8) << " floor" << endl;




    /* ------------------------------ Divider ------------------------------ */
    // STRING
    // endl= use to write in new line. If not used, will be printed on same line
    // \n = same function as endl but does not need "<<" before \n and Only works if inputted inside a "" together with the string that needs to be printed.
    // lenght = count how many characters in a string
    // [] = used for Accessing OR Changing a character on that integer (indexing starts with 0)
    // .find (object, Index on where to start looking) = extracting the postion of the first character of the object.
    // .substr(Start of index, how many characters are wanted to be extracted) = Extracting the actual characters of the string.
    // use CTRL+H to change the same word in different lines at once
    cout << "STRINGS" << endl;

    cout << phrase.length() << " Lenght Example" << endl;
    cout << phrase [0] << " Extracting positon of character Example" << endl;
    cout << phrase << endl;
    cout << phrase.find("Academy",0) << " Finding positon of first character of the object" << endl;
    cout << phrase.substr(8,3) << " Extracting the actual characters from the string" << endl;
    cout << phraseSUB << endl;
    cout << characterName + phrase << "Printing 2 strings in different variable together" << endl;

    
    /* ------------------------------ Divider ------------------------------ */
   
    cout << "START" << endl;
    cout << "Hello World" << endl;  
    cout << "My name is " << characterName << endl; 
    cout << "I am " <<  characterAge  << " years old" << endl;
    cout << "    /|" << endl; 
    cout << "   / |" << endl;
    cout << "  /  |" << endl;
    cout << " /___|" << endl;

    
    return 0;
}