#include <iostream>
#include <cmath> // Math functions
#include <string>
#include <stack> // Stack standard library
#include <queue> // Queue standard library

using namespace std;

// For containing ordered sets of data. Sacrificing the flexibility of vectors for more systematic interactions with the data they are holding
// First plate is both the bottom and top of the stack (Initially)
// Each new plate added is the new top of the stack
// At any point, the plate that can be removed from the stack is the top one
// Operates in Last-In-First-Out (LIFO) context
// Type of stack cannot be changed once declared.
// Queues is similar to stack. Operates in LIFO.
// But Queues basically works with the oldest element while stack works with the latest element.

int main (){

  stack<int> plates;
  plates.push(10);
  plates.push(8);
  plates.push(5); // The most current top element in the stack
  
  plates.pop(); // Removes the latest element inserted into the stack, now "8" is the new top element.
  plates.top(); // Returns a reference to the top element in the stack without removing it 
  plates.size(); // Returns the number of elements in the stack
  plates.empty(); // Check wether a stack is empty or not. Atm outputs 0

  queue<std::string> line
  line.push("Amy");
  line.push("Bella");
  line.push("Chloe");
  // Conceptually line looks like this ; "Chloe" -> "Bella" -> "Amy" (front element)

  line.pop(); // Removes the oldest element , now its like this : "Chloe" -> "Bella" (front element)
  line.front(); // Outputs: Bella
  line.back(); // Outputs: Chloe
  line.size() // Outputs : 2
  line.empty() // Returns a boolean value and check wether the queue is empty or not. True if size is 0.
  
}

