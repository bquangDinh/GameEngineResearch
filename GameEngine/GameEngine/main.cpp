#include <iostream>

#include "Vector3.h"

using namespace std;

int main() {
	Vector3 a(1, 2, 3);
	Vector3 b(4, 5, 6);

	b.Normalize();

	cout << "Normalized Vector B: " << b.toString() << endl;

	system("pause");
	return 0;
}