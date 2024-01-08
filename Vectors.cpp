#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
// Like an arrany but more dynamic

int main ()
{
                              /* Example 1 */
    vector <int> data = {1,2,3};
    data.push_back(12); // Adds 12 into the data vector, used to add elements to the list
    cout << data.size() << endl; // Shows how many elements are in the vector
    data.pop_back(); // remove the last element in the vector, reducing the container size by one
    cout << data[3] << endl; // Extract the 3rd index in the vector
    cout << data.size() << endl; // Shows how many elements are in the vector
   


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