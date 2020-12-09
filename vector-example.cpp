#include "Vector.h" 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Vector a(2,1,2);
	Vector b(2,3,3);
	Vector c = a+b;
	c++;
	a.print();
	b.print();
	c.print();
	//printf("A: %.3f %.3f\n",a.x[0],a.x[1]);
	//printf("B: %.3f %.3f\n",b.x[0],b.x[1]);
	//printf("C: %.3f %.3f\n",c.x[0],c.x[1]);
	return 0;
}
