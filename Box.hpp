/**************************************************************************
** Author: Greg Willis
** Date: 10/19/2017
** Description: This is a class declaration file for class Box.
*************************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box { 
	private: 
		double	height;
		double	width;
		double	length;

	public:
	// Default constructor
		Box() {
			setHeight(1);
			setWidth(1);
			setLength(1);
		}
	// Constructor prototype
		Box(double h, double w, double l);
	
	// Setter function prototypes
		bool setHeight(double);
		bool setWidth(double);
		bool setLength(double);

	// Calculation functions
		double calcVolume();
		double calcSurfaceArea();
};
#endif
