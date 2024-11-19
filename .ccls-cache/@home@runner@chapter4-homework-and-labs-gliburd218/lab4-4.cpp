//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Gregory Liburd> on <11/19/24>
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14;

int main() {
  double height = 0.0;
  cout << "Height: ";
  cin >> height;

  double radius = 0.0;
  cout << "Radius: ";
  cin >> radius;

  double volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;

  return 0;
}