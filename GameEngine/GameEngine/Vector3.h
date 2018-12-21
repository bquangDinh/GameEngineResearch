#pragma once

#include <cmath>
#include <string>

class Vector3 {
public:
	float x, y, z;

	//Constructor 
	Vector3();

	//copy a clone 
	Vector3(const Vector3&);

	//Construct by given three value x,y,z 
	Vector3(float, float, float);

	//Fundamental operators 
	Vector3& operator=(const Vector3&);
	bool operator==(const Vector3&);
	bool operator!=(const Vector3&);
	Vector3 operator+(const Vector3&);
	Vector3& operator+=(const Vector3&);
	Vector3 operator-(const Vector3&);
	Vector3& operator-=(const Vector3&);
	Vector3& operator-();
	float operator*(const Vector3&);
	Vector3 operator*(float);
	Vector3& operator*=(float);
	Vector3 operator/(float);
	Vector3& operator/=(float);

	//Fundamental functions 
	//for instance itself 
	void Zero();
	float Magnitude();
	void Normalize();

	// For debugging
	std::string toString();

	//static functions 
	static float VectorMag(const Vector3&);
	static float Distance(const Vector3&, const Vector3&);
	static Vector3 CrossProduct(const Vector3&, const Vector3&);
};
