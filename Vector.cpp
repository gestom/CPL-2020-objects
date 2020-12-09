#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstdarg>

Vector::Vector(int l,...)
{
	init(l);
	va_list valist;
	va_start(valist, l); 
	for (int i = 0; i < l; i++) x[i] = va_arg(valist, int);
	va_end(valist); 
}

Vector::~Vector()
{
	free(x);
}

void Vector::init(int l)
{
	length = l;
	x = (float*)malloc(sizeof(float)*(length));
}

void Vector::print()
{
	for (int i = 0;i<length;i++)printf("%.3f ",x[i]);
	printf("\n");
}

Vector operator+(Vector a,Vector b)
{
	Vector c(a.length);
	for (int i = 0;i<a.length;i++)
	{
		c.x[i] = a.x[i] + b.x[i];   
	}
	return c;
}

void Vector::operator++(int)
{
	for (int i = 0;i<length;i++)x[i]++;
}

