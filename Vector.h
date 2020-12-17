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
		virtual float getLength();	
		void print();
		virtual Vector operator+(Vector a);
		void operator=(Vector a);

	private:
		float *x;
		int size;
		void init(int l);
};

