class Vector
{
	public:
		Vector(int l, ...);
		~Vector();
		int length;
		float *x;
		void print();
		void operator++(int);
	private:
		void init(int length);
};

		Vector operator+(const Vector a,const Vector b);
