#include <stdlib.h>

class Vector
{
	public:
		Vector(int l,...);
		Vector(const Vector &a);
		~Vector();
		void set(int i,float x);
		float get(int i);
		int getLength();
		void operator++();

		void print();
		float *x;
		int length;
		void init(int l);
};

Vector operator+(Vector a,Vector b);
