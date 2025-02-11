// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  double total = 0.0;

  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;

  total = small + medium + large + family;
  
  cout << "Total: " << total << endl;
  cout << "Small: " << (small / total)*100 << endl;
  cout << "Medium: " << (medium / total)*100 << endl;
  cout << "Large: " << (large / total)*100 << endl;
  cout << "Family: " << (family / total)*100 << endl;
  return 0;
  
} // end of main function