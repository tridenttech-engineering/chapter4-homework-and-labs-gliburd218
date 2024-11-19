// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Gregory Liburd> on <11/19/24>

#include <iostream>
using namespace std;

int main() {
  int small, medium, large, family;

  // Input
  cout << "Enter number of small pizzas sold: ";
  cin >> small;
  cout << "Enter number of medium pizzas sold: ";
  cin >> medium;
  cout << "Enter number of large pizzas sold: ";
  cin >> large;
  cout << "Enter number of family pizzas sold: ";
  cin >> family;

  // Processing
  int total = small + medium + large + family;
  double percentage_small = (static_cast<double>(small) / total) * 100;
  double percentage_medium = (static_cast<double>(medium) / total) * 100;
  double percentage_large = (static_cast<double>(large) / total) * 100;
  double percentage_family = (static_cast<double>(family) / total) * 100;

  // Output
  cout << "Total number of pizzas sold: " << total << endl;
  cout << "Percentage of small pizzas sold: " << percentage_small << "%" << endl;
  cout << "Percentage of medium pizzas sold: " << percentage_medium << "%" << endl;
  cout << "Percentage of large pizzas sold: " << percentage_large << "%" << endl;
  cout << "Percentage of family pizzas sold: " << percentage_family << "%" << endl;

  return 0;
} // end of main function