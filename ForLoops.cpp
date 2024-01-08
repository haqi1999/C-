#include <iostream>
#include <cmath> // Math functions
#include <string>

using namespace std;

// for (Initial variable, looping condition, line of code done after every iteration)
// A counter variable declared by the first part of a for loop only exists inside the scope of that loop. It cannot be used outside of the loop.
int main () {

    int numbs[] = {1,2,3,4,10,11};
    for (int i = 0; i < 6; i++){
        cout << numbs[i] << endl;
    }

    return 0;
}

// When the value is 4, it will jump directly into the next value
/* 
  The continue keyword can be placed inside a loop to skip over
  one iteration of the loop. If continue is executed, the current loop 
  iteration will immediately end, and the next iteration will begin.
*/

/* for (int i = 0; i < 10; i++) {
  if (i == 4) {
  continue;
  }
  cout << i << "\n";
} */


/* For-each loop example (Useful for iterating through list-like structures)

  int fibonacci[5] = {0, 1, 1, 2, 3};
  or (int number : fibonacci) {
  std::cout << number;
}

*/