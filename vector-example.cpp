#include <stdio.h>
#include <stdlib.h>
#include "Vector.h" 

int main()
{
	Vector a;
	a.length = 2;
	a.x = (float*)malloc(sizeof(float)*(a.length));
	a.x[0] = 1;
	a.x[1] = 2;

	Vector b;
	b.length = 2;
	b.x = (float*)malloc(sizeof(float)*(b.length));
	b.x[0] = 3;
	b.x[1] = 2;

	Vector c;
	c.length = 2;
	c.x = (float*)malloc(sizeof(float)*(b.length));
	c = a + b;

	printf("A: %.3f %.3f\n",a.x[0],a.x[1]);
	printf("B: %.3f %.3f\n",b.x[0],b.x[1]);
	printf("C: %.3f %.3f\n",c.x[0],c.x[1]);
	return 0;
}
