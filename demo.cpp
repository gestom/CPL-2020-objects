#include <stdio.h>
#include <stdlib.h>
#include "Cylinder.h"

int main(int argc,const char *argv[])
{
	Vector *x;
	if (argv[1][0] == 'C'){
		x = new Cylinder(atof(argv[2]),atof(argv[3]));
	}
	if (argv[1][0] == 'V'){
		x = new Vector(2,atof(argv[2]),atof(argv[3]));
	}
	printf("Length of X is %.3f\n",x->getLength());

	return 0;
}
