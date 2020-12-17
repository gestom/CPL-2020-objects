#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

int main()
{
	Vector a(2,1,2);
	Vector b(2,2,3);
	Vector c = a + b;
	c++;
	a.print();
	b.print();
	c.print();
	return 0;
}
