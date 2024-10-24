#include "electricfield.cpp"
#include "magneticfield.cpp"

int main()
{
	Electric_Field E_components(1e5, 10.9, 1.7e2);
	std::cout << "Outputting Magnitude of Electric Field 1: " << E_components.CalculateMagnitude() << std::endl;
	
	Electric_Field E_components2;
	E_components2.setValues(4, 5, 6);
	std::cout << "Outputting Magnitude of Electric Field 2: " << E_components2.CalculateMagnitude() << std::endl;

	std::cout << "Calculating and returning Inner Product: " << E_components.InnerProduct(E_components2) << std::endl;

	Magnetic_Field M_components(12, 24, 1e3);
	std::cout << "\nOutputting Magnitude of Magnetic Field 1: " << M_components.CalculateMagnitude() << std::endl;

	Magnetic_Field M_components2;
	M_components2.setValues(1e4, 20.4, 2.34e3);
	std::cout << "Outputting Magnitude of Magnetic Field 2: " << M_components2.CalculateMagnitude() << std::endl;

	std::cout << "Calculating and returning Unit Vector of MF1: ";
	double* Unit = M_components.CalculateUnitVector(M_components);
	std::cout << "(" << Unit[0] << ", " << Unit[1] << ", " << Unit[2] << ")" << std::endl;



	return 0;
}
