#include "Vector.h"
#include <cstdarg>
#include <stdio.h>

Vector::Vector(const Vector &a)
{
	init(a.length);
	for (int i = 0; i < length; i++) x[i] = a.x[i]; 
}

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
	x = (float*) malloc(sizeof(float)*length);
}
		
void Vector::set(int i,float ix)
{
	if (i >= 0 && i<length) x[i] = ix;
}

float Vector::get(int i)
{
 	if (i >= 0 && i<length) return x[i];
	return 0;
}

int Vector::getLength()
{
	return length;
}

Vector operator+(Vector a,Vector b)
{
	Vector c(a.getLength());
	for (int i = 0;i<a.getLength();i++) c.set(i,a.get(i) + b.get(i)); 
	return c;
}

void Vector::print()
{
	for (int i = 0;i<length;i++) printf("%.3f ",x[i]);
	printf("\n");
}

void Vector::operator++(int)
{
	for (int i = 0;i<length;i++) x[i]++;
}

