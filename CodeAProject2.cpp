#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <stdlib.h>
#include <time.h> // Gives Access to functionalities from header file libraries 

using namespace std;

/* 
User will select one of the following choices available.
Selected choice will then be compared to random generated choice from
computer.
print out the result of the users choice and the computers
print out wether the user loses or wins
*/

int user_choice;
int rock = 1;
int paper = 2;
int scissors = 3;
string computer_sign;
string user_sign;
string result;



int main (){
    
    /*
    This is needed to prevent same sequence of rand numbers 
    in every execution. Only needed to be called once
    */
srand (time(NULL)); 

    // generates the random number sequence between 0 and 4
int computer_choice = (rand() % 4)+0;

    cout << "Welcome to THE GAME\n";
    cout << "Choose one of the following choices\n";
    cout << "Rock ~ 0\n";
    cout << "Paper ~ 1\n";
    cout << "Scissors ~ 2\n";
    cout << "Lizard ~ 3\n";
    cout << "Spock ~ 4\n";
    cout << "Selected choice: ";
    cin >> user_choice;

    if (computer_choice == rock && user_choice == paper){
        result = "YOU WIN";
    }
    else if(computer_choice == paper && user_choice == scissors){
        result = "YOU WIN";
    }
    else if(computer_choice == scissors && user_choice == rock){
        result = "YOU WIN";
    } 
    else if(computer_choice == rock && user_choice == scissors){
        result = "YOU LOSE"; 
    }
    else if(computer_choice == paper && user_choice == rock){
        result = "YOU LOSE"; 
    } 
    else if(computer_choice == scissors && user_choice == paper){
        result = "YOU LOSE";     
     }
     else {
        result = "DRAW";
     }

    cout << "Computer Choses " << computer_choice << endl;
    cout << "User Choses " << user_choice << endl;
    cout << "SHOOTA ";
    cout << result;
    return 0;
}