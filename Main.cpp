#include <iostream>
#include "Cylinder.h"

int main() {
	Cylinder myCylinder(5.0, 7.0);		//Test Cylinder class w/ hard coded numbers

	std::cout << "Radius: " << myCylinder.getRadius() << std::endl;		//outputs the Radius to the screen

	std::cout << "Height: " << myCylinder.getHeight() << std::endl;		//outputs the Height to the screen

	std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;	//outputs the Volume to the screen

	std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;	//outputs the Surface Area the the screen

	return 0;
}