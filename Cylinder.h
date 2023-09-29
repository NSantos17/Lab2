#ifndef Cylinder_h			//prevent header file from being duplicated or ran more than once
#define Cylinder_h

class Cylinder {			//declaration of class name
private:					//access specifier indicating private members
	double radius;
	double height;

public:								//access specifier indicating public members
	Cylinder(double r, double h);	//method to be called upon, specifies the class takes 2 double(decimal) arguments

	double getRadius() const;		//get and set functions for radius, const = method does not modify object
	void setRadius(double r);

	double getHeight() const;		//get and set funtions for height
	void setHeight(double h);

	double calculateVolume() const;		//method to calculate volume
	double calculateSurfaceArea() const;	//method to calculate surface area
};

#endif										//enclose the header file

