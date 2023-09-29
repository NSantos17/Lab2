#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder(double r, double h) {		//constructor for Cylinder class
	radius = r;
	height = h;
}

double Cylinder::getRadius() const {			//definition for getRadius method, *const = method does not modify object
	return radius;
}

void Cylinder::setRadius(double r) {			//definition to set radius value
	radius = r;
}

double Cylinder::getHeight() const {			//definition for getHeight method
	return height;
}

void Cylinder::setHeight(double h) {			//definition to set height value
	height = h;
}

double Cylinder::calculateVolume() const {			//definition for calculateVolume method
	return 3.141592 * radius * radius * height;		//process of calculating volume
}

double Cylinder::calculateSurfaceArea() const {			//definition for calculateSurfaceArea
	return 2 * 3.141592 * radius * (radius + height);	//process of calculating surface area
}