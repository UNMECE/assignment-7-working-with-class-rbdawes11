#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H
#include <iostream>

class Magnetic_Field
{
	private:
		double *M;
	public:
		Magnetic_Field()
		{
			M = new double[3];
			for(int i = 0; i < 3; i++)
				M[i] = 0;

		}
	    Magnetic_Field(double x, double y, double z);
	    double CalculateMagnitude();
	    double* CalculateUnitVector(Magnetic_Field &m);
	    double* getValues();
	    void setValues(double x, double y, double z);	  
	    
	    ~Magnetic_Field() {delete[] M;}
};
#endif
