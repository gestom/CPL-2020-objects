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
		void operator++(int);
		float& operator[](int i);
	
		void print();
	private:
		float *x;
		int length;
		void init(int l);
};

Vector operator+(Vector a,Vector b);
