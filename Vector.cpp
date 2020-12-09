#include "Vector.h"
#include <stdlib.h>

Vector operator+(Vector a,Vector b)
{
	Vector c;
	c.length = a.length;
	c.x = (float*)malloc(sizeof(float)*(c.length));
	for (int i = 0;i<a.length;i++)
	{
		c.x[i] = a.x[i] + b.x[i];   
	}
	return c;
}
