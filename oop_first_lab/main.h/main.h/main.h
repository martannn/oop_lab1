#pragma once
#include <math.h>
#include <iostream>
#include <cstdlib>

class B
{

private:
	double x;
	double y;
	double z;
	
public:
	B(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	double calculate()
	{
		double result = (pow(x, 2) + pow(z, 2)) / pow(tan(abs(x)), 0.3);
		result /= (3 + x + pow(y, 2)) / (2 + pow(z, 3) / 6);
		result += pow(log(pow(abs(y / z), 1 / 3)), 0.3);
		return  result;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getZ()
	{
		return z;
	}

};

class A : public B
{

private:
	double b;

public:

	A(double x, double y, double z, double b) : B(x, y, z)
	{
		this-> b= b;
	}

	double calculate()
	{
		double result = 2 * cos(pow(abs(getX()), 1.3)) - pow(getX(), 2) / 6;
		result /= getZ() / b + pow(sin(pow((getY() + getZ()), 3)), 2);
		result += pow(log(abs(pow(getZ(), 0.6))), 2);
		return result;
	}


	double getB()
	{
		return b;
	}

};


