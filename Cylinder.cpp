#include "Cylinder.h"

Cylinder::Cylinder(float diameter, float length):Vector(2,diameter,length){}

Cylinder::~Cylinder()
{
}

float Cylinder::getLength()
{
	return get(1);
}
