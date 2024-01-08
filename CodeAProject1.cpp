#include <iostream>
#include <cmath> 
#include <string> 

using namespace std;

int pesos;
int reais;
int soles;
double dollars;

double conversion_rate1 = 0.049;
double conversion_rate2 = 0.18;
double conversion_rate3 = 0.26;

int main() {
  
  cout << "Enter Number of Colombian Pesos: ";
  cin >> pesos;
  cout << "Enter Number of Brazillian Reais: ";
  cin >> reais;
  cout << "Enter Number if Peruvian Soles:";
  cin >> soles;

  /* conversion rates
  Pesos to USD : *0.049 conversion rate 1
  Reais to USD : *0.18 conversion rate 2
  Soles to USD : *0.26 conversion rate 3
  */
dollars = (pesos * conversion_rate1) + (reais * conversion_rate2) + (soles * conversion_rate3);

cout << "US Dollars = " << dollars << endl;

  return 0; 
}