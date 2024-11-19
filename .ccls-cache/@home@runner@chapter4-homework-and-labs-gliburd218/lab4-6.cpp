//Lab4-6.cpp - displays the area of a triangle
//Created/revised by Gregory Liburd on 11/13

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int base = 11.0;
	int height = 13.0;
	double area = 0.0;

	//calculate and display area
	
	area = base * height / 2.0;
	std::cout << "Area: " << area << endl;

	return 0;
}	//end of main function