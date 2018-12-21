#include "Vector3.h"

Vector3::Vector3()
{
	x = y = z = 0;
}

Vector3::Vector3(const Vector3 &vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

Vector3::Vector3(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Vector3 & Vector3::operator=(const Vector3 &vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
	return *this;
}

bool Vector3::operator==(const Vector3 &vec)
{
	if (x == vec.x && y == vec.y && z == vec.z) {
		return true;
	}
	return false;
}

bool Vector3::operator!=(const Vector3 &vec)
{
	if (x != vec.x || y != vec.y || z != vec.z) {
		return true;
	}
	return false;
}

Vector3 Vector3::operator+(const Vector3 &vec)
{
	return Vector3(x + vec.x, y + vec.y, z + vec.z);
}

Vector3 & Vector3::operator+=(const Vector3 &vec)
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
	return *this;
}

Vector3 Vector3::operator-(const Vector3 &vec)
{
	return Vector3(x - vec.x, y - vec.y, z - vec.z);
}

Vector3 & Vector3::operator-=(const Vector3 &vec)
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
	return *this;
}

Vector3 & Vector3::operator-()
{
	x = -x;
	y = -y;
	z = -z;
	return *this;
}

float Vector3::operator*(const Vector3 &vec)
{
	return (x * vec.x + y * vec.y + z * vec.z);
}

Vector3 Vector3::operator*(float scalar)
{
	return Vector3(x*scalar, y*scalar, z*scalar);
}

Vector3 & Vector3::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	z *= scalar;
	return *this;
}

Vector3 Vector3::operator/(float scalar)
{
	return Vector3(x / scalar, y / scalar, z / scalar);
}

Vector3 & Vector3::operator/=(float scalar)
{
	x /= scalar;
	y /= scalar;
	z /= scalar;
	return *this;
}

void Vector3::Zero()
{
	x = y = z = 0;
}

float Vector3::Magnitude()
{
	return sqrt(x*x + y * y + z * z);
}

void Vector3::Normalize()
{
	float magnitude = this->Magnitude();
	x /= magnitude;
	y /= magnitude;
	z /= magnitude;
}

std::string Vector3::toString()
{
	std::string s = "x: " + std::to_string(x) + " | y: " + std::to_string(y) + " | z: " + std::to_string(z);
	return s;
}

float Vector3::VectorMag(const Vector3 &vec)
{
	return sqrt(vec.x*vec.x + vec.y*vec.y + vec.z*vec.z);
}

float Vector3::Distance(const Vector3 &a, const Vector3 &b)
{
	// calculate the distance between two points
	float dx = a.x - b.x;
	float dy = a.y - b.x;
	float dz = a.z - b.z;
	return sqrt(dx*dx + dy * dy + dz * dz);
}

Vector3 Vector3::CrossProduct(const Vector3 &a, const Vector3 &b)
{
	float dx = a.y*b.z - a.z*b.y;
	float dy = a.z*b.x - a.x*b.z;
	float dz = a.x*b.y - a.y*b.x;

	return Vector3(dx, dy, dz);
}











