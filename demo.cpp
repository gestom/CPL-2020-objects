#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

int main()
{
	try{
		Vector a(2,1,2);
		Vector b(2,2,3);
		Vector c = a + b;
		c++;

		a[0] = 0;

		a.print();
		b.print();
		c.print();
	}catch (const char* msg){
		printf("%s\n",msg);
	}
	return 0;
}
