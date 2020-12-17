#include "Cylinder.h"

Cylinder::Cylinder(float diameter, float length):Vector(2,diameter,length){}

Cylinder::~Cylinder()
{
}

float Cylinder::getLength()
{
	return get(1);
}

Vector Cylinder::operator+(Vector a)
{
	if (get(0) == a.get(0)){
		Cylinder c(a.get(0),get(1) + a.get(1));
		return c;
	}
	return *this;
}
