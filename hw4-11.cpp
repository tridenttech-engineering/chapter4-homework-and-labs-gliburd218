// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double balance = 0.0; 
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;

  // Take the beginning balance    
  cout << "Enter beginning balance: ";
  cin >> balance;

  // Take the total deposits    
  cout << "Enter total deposits: ";
  cin >> totalDeposits;

  // Take the total withdrawals    
  cout << "Enter total withdrawals: ";
  cin >> totalWithdrawals;

  // Add total deposits with the balance    
  balance = balance + totalDeposits;

  // Subtract total withdrawals from the balance    
  balance = balance - totalWithdrawals;

  // Display the ending balance
  cout << "Ending balance: $" << balance << endl;

  return 0;
} // end of main function