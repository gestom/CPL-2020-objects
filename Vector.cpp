#include "Vector.h"
#include <cstdarg>
#include <stdio.h>

Vector::Vector(const Vector &a)
{
	init(a.size);
	for (int i = 0; i < size; i++) x[i] = a.x[i]; 
}

Vector::Vector(int l,...)
{
	init(l);
	va_list valist;
	va_start(valist, l); 
	for (int i = 0; i < l; i++) x[i] = va_arg(valist, double);
	va_end(valist); 
}

Vector::~Vector()
{
	free(x);
}

void Vector::init(int l)
{
	size = l;
	x = (float*) malloc(sizeof(float)*size);
}
		
void Vector::set(int i,float ix)
{
	if (i >= 0 && i<size) x[i] = ix; else throw "Out of bounds";
}

float Vector::get(int i)
{
 	if (i >= 0 && i<size) return x[i];
	return 0;
}

int Vector::getSize()
{
	return size;
}

Vector operator+(Vector a,Vector b)
{
	Vector c(a.getSize());
	for (int i = 0;i<a.getSize();i++) c.set(i,a.get(i) + b.get(i)); 
	return c;
}

void Vector::print()
{
	for (int i = 0;i<size;i++) printf("%.3f ",x[i]);
	printf("\n");
}

void Vector::operator++(int)
{
	for (int i = 0;i<size;i++) x[i]++;
}

float& Vector::operator[](int i)
{
	if (i < 0 || i>=size) throw "Out of bounds";
	return x[i];
}

float Vector::getLength()
{
	float a=0;
	for (int i = 0;i<size;i++) a += x[i]*x[i];
	return sqrt(a);
}
