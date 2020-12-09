struct Vector
{
	int length;
	float *x;	
};

Vector operator+(Vector a,Vector b);
Vector init(int length);
