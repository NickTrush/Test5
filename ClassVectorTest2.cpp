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
	
	Vector plus(Vector A);
	Vector minus(Vector A);
	Vector mul(double a);
	double scal_mul(Vector A);
	Vector vec_mul(Vector A);
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

Vector Vector::plus(Vector A)
{
	return Vector(x + A.get_x(), y + A.get_y(), z + A.get_z());
}

Vector Vector::minus(Vector A)
{
	return Vector(x - A.get.y(), y - A.get_y(), z - A.get_z());
}

Vector Vector::mul(double a)
{
	return Vector(x * a, y * a, z * a);
}

double Vector::scal_mul(Vector A)
{
	return x*A.get_x() + y*A.get_y() + z*A.get_z();
}

Vector Vector::vec_mul(Vector A)
{
	return Vector(y*A.get_z() - z*A.get_y, z*A.get_x() - x*A.get_z(), x*A.get_y() - y*A.get(ax);
}

double Vector::absolute(Vector A);
{
	return sqrt(x*x + y*y + z*z);
}

int main()
{
	Vector A(3, 4, 1);
	
	cout << A.get_x() << " " << A.get_y() << " " << A.get_z() << endl;
	
	return 0;
}

	
