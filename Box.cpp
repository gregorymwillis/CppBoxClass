/**************************************************************************
** Author: Greg Willis
** Date: 10/19/2017
** Description: This is the file with the Box class function definitions
**************************************************************************/
#include "Box.hpp"

// Constructor for Box class
Box::Box(double h, double w, double l) {
	height = h;
	width = w;
	length = l;
};

// Setter functions

bool Box::setHeight(double h) {
	if (h > 0) {
		height = h;
		return true;
	}
	else {
		return false;
	}
};

bool Box::setWidth(double w) {
	if (w > 0) {
		width = w;
		return true;
	}
	else {
		return false;
	}
};

bool Box::setLength(double l) {
	if (l > 0) {
		length = l;
		return true;
	}
	else {
		return false;
	}
};

// Calculation functions
double Box::calcVolume() {
	return height * width * length;
};

double Box::calcSurfaceArea() {
	return ((height * width * 2) + (height * length * 2)
		+ (length * width * 2));
};
