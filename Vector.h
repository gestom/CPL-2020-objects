#include <stdlib.h>
#include <math.h>

class Vector
{
	public:
		Vector(int l,...);
		Vector(const Vector &a);
		~Vector();
		void set(int i,float x);
		float get(int i);
		int getSize();
		void operator++(int);
		float& operator[](int i);
		float getLength();	
		void print();
	private:
		float *x;
		int size;
		void init(int l);
};

Vector operator+(Vector a,Vector b);
