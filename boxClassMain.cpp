// Main program to test Box.hpp and Box.cpp
#include <iostream>
#include "Box.hpp"

using std::cout;
using std::endl;

int main () {

Box box1(2.4, 7.1, 5.0);
Box box2;

double volume1 = box1.calcVolume();
double surfaceArea1 = box1.calcSurfaceArea();
double volume2 = box2.calcVolume();
double surfaceArea2 = box2.calcSurfaceArea();

cout << "Box1 vol: " << volume1 << endl;
cout << "Box1 area: " << surfaceArea1 << endl;
cout << "Box2 vol: " << volume2 << endl;
cout << "Box2 area: " << surfaceArea2 << endl;
}
