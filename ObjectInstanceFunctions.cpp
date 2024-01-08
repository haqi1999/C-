#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

class Student 
{
    public:
        string name;
        string major;
        double gpa;
        Student (string aName, string aMajor, double aGpa) // Constructor
        {
        name = aName;
        major = aMajor;
        gpa = aGpa;
        }

        bool hasHonors() // a function inside a class to be called in an instance/object. // This is called Method
        {
            if(gpa>=3.5)
            {
                 return true;
            }
            return false;

        }
};


int main ()
{
    Student student1 ("Haqi","Mechanical Engineer",4.0);
    Student student2 ("Pam","Electrical Engineer",3.0);
    cout << student2.major << endl;
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    // 1 = true, 0 = false (Binary)



    return 0;
}
// Next is GettersSetters
// You can make a method outside class for that class
// Look at BookProjectAnswer for example