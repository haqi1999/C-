#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <unordered_set>
#include <set>

// NB : In a set, elements cannot be duplicated. thus only 1 of them will be printed out
// On the other hand, a set stores elements following a specific order and can be iterated directly based on the order of its elements.
// As the name suggests, an unordered_set stores elements in no particular order. Searching, inserting, and deleting an element from an unordered_set is generally faster compared to a set.

int main (){
  unordered_set<int> primes
  unordered_set<int> numbers({2, 3, 5, 7});
  unordered_set<int> numberss({2, 3, 5, 5});    // primes contains {2, 3, 5}, since 5 is duplicated.

  primes.insert(2);
  primes.insert(3);
  primes.insert(3);  // Duplicate value is not inserted\primes.erase(3)
  primes.erase(3);  // Now prime only contain {2}. If used this way, returns 1 if element is removed successfully and 0 if otherwise.

  unordered_set<int> numbers({2, 3, 5, 7});

  /* Checking for an element
  the .count() returns the number of elements that match the arguement VALUE. Convenient way of checking whether the set containts a specified element.
  */
    
  if (numbers.count(4)) {
    std::cout << "4 is a prime";
  }
  else {
    std::cout << "4 is not a prime";
  } // Output : 4 is not a prime

  unordered_set<char> symbols({'x', 'y', 'z'});
  cout << symbols.size();    // Outputs: 3 at this point of the code, Returns the number of elements 

  symbols.erase('x');
  symbols.erase('y');
  symbols.erase('z');
  symbols.empty() // Boolean, outputs 1 at this point of the code.

    // unordered set vs ordered set
  std::unordered_set<int> unordered({4, 2, 7, 1, 3});
  std::cout << "unordered_set: ";
  
  for(int n: unordered) {
    cout << n << " ";
  }
  
  cout << "\n";

  set<int> ordered({4, 2, 7, 1, 3});
  cout << "set: ";
  for(int n: ordered) {
    cout << n << " ";
  }

  //unordered_set: 3 1 7 2 4
  //set: 1 2 3 4 7

    
}
