#include <iostream>

using namespace std;

class Vector
{
	double x, y, z;
public:
	Vector(double x, double y, double z);
	~Vector();
	
	double get_x();
	double get_y();
	double get_z();
	
	Vector operator + (Vector A);
	Vector operator -(Vector A);
	Vector operator *(double a);
	double operator *(Vector A);
	Vector operator **(Vector A);
	ostream:: operator << (Vector &A);
	double absolute();
	
private:
	void set_x(double (x));
}

double Vector::get_x()
{
	return x;
}

double Vector::get_y()
{
	return y;
}

double Vector::get_z()
{
	return z;
}

Vector::Vector(double x, double y, double z)
{
	x = get_x();
	y = get_y();
	z = get_z();
}

Vector::~Vector();
{
	x = 0;
	y = 0;
	z = 0;
}

Vector Vector::operator +(Vector A)
{
	return Vector(x + A.get_x(), y + A.get_y(), z + A.get_z());
}

Vector Vector::operator -(Vector A)
{
	return Vector(x - A.get.y(), y - A.get_y(), z - A.get_z());
}

Vector Vector::operator *(double a)
{
	return Vector(x * a, y * a, z * a);
}

double Vector::operator *(Vector A)
{
	return x*A.get_x() + y*A.get_y() + z*A.get_z();
}

Vector Vector::operator **(Vector A)
{
	return Vector(y*A.get_z() - z*A.get_y, z*A.get_x() - x*A.get_z(), x*A.get_y() - y*A.get(ax);
}

double Vector::absolute(Vector A)
{
	return sqrt(x*x + y*y + z*z);
}

ostream Vector:: operator << (Vector A)
{
	

int main()
{
	double a = 10;
	Vector A(1, 2, 3);
	Vector B(4, 5, 6);
	Vector Sum(0, 0, 0);
	Vector Sub(0, 0, 0);
	Vector Mul(0, 0, 0);
	double Scal = 0;
	Vector VectMul(0, 0, 0);
	
	Sum = A + B;
	Sub = A - B;
	Mul = A * a;
	Scal = A * B;
	VectMul = A^B;
	
	cout << "A + B = " << Sum << endl
	<< "A - B = " << Sub << endl
	<< "A * a = " << Mul << endl
	<< "A ** B = " << VectMul << endl;
	
	return 0;
}

	
