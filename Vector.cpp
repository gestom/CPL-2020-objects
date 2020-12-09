#include "Vector.h"
#include <stdlib.h>

Vector init(int l)
{
	Vector r;
	r.length = l;
	r.x = (float*)malloc(sizeof(float)*(r.length));
	return r;
}

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
