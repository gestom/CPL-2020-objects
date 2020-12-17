#include "Vector.h"

class Cylinder:public Vector
{
	public:
		Cylinder(float diameter,float length);
		~Cylinder();
		float getLength();
};
