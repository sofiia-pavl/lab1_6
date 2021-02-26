#include "Vector3d.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
void Vector3d::setVector(Vector3d::Triad value)
{
	vector = value;
}
void Vector3d::Init(Vector3d::Triad vector)
{
	setVector(vector);
}
void Vector3d::Display() const
{
	cout << endl;
	cout << "vector = " << endl;
	vector.Display();
}
void Vector3d::Read()
{
	Vector3d::Triad v;
	cout << endl;
	cout << "Vector = ?" << endl;
	v.Read();
	Init(v);
}
void Vector3d::addV()
{
	int a, b, c;
	cout << "x = "; cin >> a;
	cout << "y = "; cin >> b;
	cout << "z = "; cin >> c;
	vector.add(a, b, c);
}
void Vector3d::multiplayV()
{
	int a, b, c;
	cout << "x1 = "; cin >> a;
	cout << "y1 = "; cin >> b;
	cout << "z1 = "; cin >> c;
	vector.multiplay(a, b, c);
}
void Vector3d::Triad::setX(int value)
{
	x = value;
}
void Vector3d::Triad::setY(int value)
{
	y = value;
}
void Vector3d::Triad::setZ(int value)
{
	z = value;
}
void Vector3d::Triad::Init(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
}
void Vector3d::Triad::Display() const
{
	cout << endl;
	cout << "first = " << x << endl;
	cout << "second = " << y << endl;
	cout << "third = " << z << endl;
}
void Vector3d::Triad::Read()
{
	int x, y, z;
	cout << endl;
	cout << "first = ?"; cin >> x;
	cout << "second = ?"; cin >> y;
	cout << "third = ?"; cin >> z;
	Init(x, y, z);
}
void Vector3d::Triad::add(int x1, int y1, int z1)
{
	x += x1;
	y += y1;
	z += z1;
}
void Vector3d::Triad::multiplay(int x1, int y1, int z1)
{
	x *= x1;
	y *= y1;
	z *= z1;
}
void Vector3d::Triad::equal()
{
	if (x == y && x == z && y == z && y == x && z == x && z == y)
		cout<< "check for equality was a success";
}
string Vector3d::Triad::toString()
{
	stringstream sout;

	sout << x << " + i * " << y << " + i * " << z << endl;

	return sout.str();
}