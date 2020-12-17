#include "Vector.h"
#include <stdio.h> 

class Cylinder:public Vector
{
	public:
		Cylinder(float diameter,float length);
		~Cylinder();
		float getLength();
		Vector operator+(Vector a);
};
