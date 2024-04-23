#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <vector> // THIS IS IMPORRANT FOR VECTORS
#include <bits/stdc++.h>

using namespace std;
// Like an arrany but more dynamic
// It can grow and shrink in size even after declaration
// NB : the type of elements stored inside a vector CANNOT be changed after declaration

int main ()
{
                              /* Example 1 */
    vector <int> data = {1,2,3};
    vector <char> alphabet = {'a','b','c'};
    data.push_back(12); // Adds 12 into the data vector, used to add elements to the list. Add element to the "back"
    cout << data.size() << endl; // Shows how many elements are in the vector
    data.pop_back(); // remove the last element in the vector, reducing the container size by one
    cout << data[3] << endl; // Extract the 3rd index in the vector
    cout << data.size() << endl; // Shows how many elements are in the vector
    cout << alphabet.front(); // Output: a
    cout << alphabet.back(); // Output: c
    cout << alphabet.empty(); // Output : 0, Returns boolean value, check wether a vector is empty or not
   


                              /* Example 2 */

                              
 // Creating a list
    list<int> demoList;
  
    // Adding elements to the list
    // using push_back()
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
  
    // Initial List:
    cout << "Initial List: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";
  
    // removing an element from the end of List
    // using pop_back
    demoList.pop_back();
  
    // List after removing element from end
    cout << "\n\nList after removing an element from end: ";
    for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
        cout << *itr << " ";

    return 0;
}

    /* for Loops for Vectors
      iterate from 0 to the size of the vector
    */

       vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    
      for (int i = 0; i < vowels.size(); i++) {
        std::cout << vowels[i] << " ";
    }  // Outputs: a e i o u

    /* for-each loop for Vectors
      Counter variable is the vector element itself, not the index
    */
       vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
      
      for (char letter: vowels) {
        std::cout << letter << " ";
      } // Outputs: a e i o u
    
