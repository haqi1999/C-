#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <unordered_map>
#include <map>

using namespace std;

// data structure taht stores a collection of elements formed by a combination of a key value and a mapped value
// key value acts as unique identifier for each element
// map value acts as the content associated with the key (Key-value pair)
// cannot contain duplicate keys

int main () {

  // Declare an unordered map with string keys and integer values
    unordered_map<string, int> country_codes;
  
  std::unordered_map<string, int> country_codes( 
  {{"India", 91}, 
  {"Italy", 39}, 
  {"Italy", 27}});
  // country_codes contains {"India", 91} and {"Italy", 39}. Example of duplicated keys.

  unordered_map<string, int> country_codes;
  country_codes.insert({"Thailand", 66});
  country_codes.insert({"Peru", 51});
  country_codes.insert({"Peru", 9});  // Duplicate key is not inserted
  // country_codes contains {"Thailand", 66} and {"Peru", 51}
  // NB: Make sure that the types of the key and the mapped value match the hash map

  unordered_map<string, int> country_codes; 
  country_codes["Thailand"] = 66;
  country_codes["Peru"] = 51;
  cout << country_codes["Thailand"]; // Outputs 66
  // country_codes contains {"Thailand", 66} and {"Peru", 51}
  // The [] can be used to access and add new elements into the hash map

  :unordered_map<string, int> country_codes;
  country_codes["Thailand"] = 66;
  country_codes["Peru"] = 51;
  country_codes.erase("Thailand");
  // country_codes contains {"Peru", 51}
  // .erase() removes an element from the hash map

  /* 
    Checking for an Element
    The .count() function searches in the hash map and returns the number of elements whose key matches the arguement value.\
    In this case, the output is "There is a code for Belgium"
  */
  unordered_map<string, int> country_codes;
  country_codes["Argentina"] = 54;
  country_codes["Belgium"] = 32;
  if (country_codes.count("Belgium")) {
    std::cout << "There is a code for Belgium";
  }
  else {
    std::cout << "There isn't a code for Belgium";
  }

  /*
    Accessing Hash Map Elements
    [] will inserts a new element into the hash map if it does not exist in the mentioned hash map.
    To avoid this behaviour in an accidental way, use the .at() operator instead of [] when accessing 
    elements. 
  */
  unordered_map<string, int> country_codes;
  country_codes["Japan"] = 81;
  country_codes["Turkey"] = 90;
  std::cout << country_codes.at("Pakistan");  // Error: out_of_range\
  cout << country_codes.size();  // Outputs: 2

  // Example of boolean empty() function and erasing elements from the hash map.
  cout << countryC.empty();  // Outputs: 0
  countryC.erase("Japan");
  countryC.erase("Turkey");
  countryC.erase("Pakistan");
  cout << countryC.empty();   // Outputs: 1

  /* 
    Iterating through the Hash Map
    for-each loop is convenient in this case. counter variable is the hash map itself.
    .first is the value of the key and .second is the value of the map
  */

  unordered_map<string, int> country_codes;

  country_codes["Japan"] = 81;
  country_codes["Turkey"] = 90;
  country_codes["Pakistan"] = 92;

  for(auto it: country_codes){
    cout << it.first << " " << it.second << "\n";
  }
  //Pakistan 92
  //Japan 81
  //Turkey 90

  // Example of unordered and ordered mapping. Ordered mapping follows a specific order of key values.
  unordered_map<int, char> unordered({{2, 'b'}, {1, 'a'}, {3, 'c'}});
  for(auto it: unordered){
    cout << it.first << " " << it.second << "\n";
  }
  cout << "\n";
  
  map<int, char> ordered({{2, 'b'}, {1, 'a'}, {3, 'c'}});
  for(auto it: ordered){
    cout << it.first << " " << it.second << "\n";
  }

   // 3 c
   // 1 a
   // 2 b
    
   // 1 a
   // 2 b
   // 3 c
}


