// Main program to test Box.hpp and Box.cpp
#include <iostream>
#include "Box.hpp"

using std::cout;
using std::endl;

int main () {
	
	double area;
	double volume;

	Box sB1(2, 2, 2);
	Box sb2;

	area = sB1.calcSurfaceArea();
	cout << area << endl;
	volume = sB1.calcVolume();
	cout << volume << endl;	
}
