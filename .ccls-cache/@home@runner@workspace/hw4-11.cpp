// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;

  cout << "Beginning balance: ";
  cin >> beginningBalance;
  cout << "Deposits: ";
  cin >> deposits;
  cout << "Withdrawals: ";
  cin >> withdrawals;

  endingBalance = beginningBalance + deposits - withdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  
  return 0;
} // end of main function