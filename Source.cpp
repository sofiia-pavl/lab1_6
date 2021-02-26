#include "Vector3D.h"
#include <iostream>

using namespace std;

int main()
{
	Vector3d q;
	q.Read();
	q.Display();
	cout << "edding vector:" << endl;
	q.addV();
	q.Display();

	Vector3d f;
	f.Read();
	f.Display();
	cout << "multiplay to vector:" << endl;
	f.multiplayV();
	f.Display();

	return 0;
}