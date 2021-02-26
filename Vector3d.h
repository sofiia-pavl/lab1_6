#pragma once

#include <string>
using namespace std;
class Vector3d
{
private:
	class Triad
	{
	private:
		int x;
		int y;
		int z;
	public:
		int getX() const { return x; }
		int getY() const { return y; }
		int getZ() const { return z; }

		void setX(int);
		void setY(int);
		void setZ(int);

		void add(int x1, int y1, int z1);
		void multiplay(int x1, int y1, int z1);
		void equal();

		void Init(int x, int y, int z);
		void Display() const;
		void Read();
		string toString();
	};
	Triad vector;
public:
	Vector3d::Triad getVector() const { return vector; }
	void setVector(Vector3d::Triad);

	void addV();
	void multiplayV();

	void Init(Vector3d::Triad vector);
	void Display() const;
	void Read();
};

