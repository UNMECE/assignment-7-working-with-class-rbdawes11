#include "magneticfield.h"
#include <cmath>

Magnetic_Field::Magnetic_Field(double x, double y, double z)
{
	M = new double[3];
	M[0] = x;
	M[1] = y;
	M[2] = z;
}

double Magnetic_Field::CalculateMagnitude()
{
	const double Magnitude = sqrt(pow(M[0], 2) + pow(M[1], 2) + pow(M[2],2));
	return Magnitude;
}

void Magnetic_Field::setValues(double x, double y, double z)
{
	M[0] = x;
	M[1] = y;
	M[2] = z;
}

double* Magnetic_Field::getValues()
{
	return M;
}

double* Magnetic_Field::CalculateUnitVector(Magnetic_Field &m)
{
	double* Unit = new double[3];
	double Magnitude = m.CalculateMagnitude();

	for(int i = 0; i < 3; i++)
	{
		Unit[i] = (M[i]/Magnitude);
	}

	return Unit;
}