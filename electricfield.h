#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H
#include <iostream>

class Electric_Field
{
	private:
	  double *E;
	public:
	  Electric_Field() 
	  {
	  	E = new double[3];
	  	for (int i = 0; i < 3; i++)
	  		E[i] = 0;
	  }
	  Electric_Field(double x, double y, double z);
	  double CalculateMagnitude();
	  double InnerProduct(Electric_Field &e2);
	  double* getValues();
	  void setValues(double x, double y, double z);

	  ~Electric_Field(){delete[] E;};
};

#endif
