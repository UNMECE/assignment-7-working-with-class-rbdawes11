#include "electricfield.h"
#include <cmath>

Electric_Field::Electric_Field(double x, double y, double z)
{
	E = new double[3];
	E[0] = x;
	E[1] = y;
	E[2] = z;
}

double Electric_Field::CalculateMagnitude()
{
	const double Magnitude = sqrt(pow(E[0], 2) + pow(E[1], 2) + pow(E[2],2));
	return Magnitude;
}

void Electric_Field::setValues(double x, double y, double z)
{
	E[0] = x;
	E[1] = y;
	E[2] = z;
}

double* Electric_Field::getValues()
{
	return E;
}

double Electric_Field::InnerProduct(Electric_Field &e2)
{
	double* values2 = e2.getValues();
	double product = 0;
	for(int i = 0; i < 3; i++)
	{
		product += E[i] * values2[i];
	}
	return product;
}


