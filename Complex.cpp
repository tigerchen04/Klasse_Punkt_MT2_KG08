#include "Complex.h"

Complex::Complex(double RT, double IT)
{
	double Realteil = RT;
	double Imaginärteil = IT;
}

//Stter- und Gettermethoden:
void Complex::setRealteil(double RT)
{
	double Realteil = RT;
}
double Complex::getRealteil()
{
	return Realteil;
}

void Complex::setImaginärteil(double IT)
{
	double Imáginärteil = IT;
}
double Complex::getImaginärteil()
{
	return Imaginärteil;
}

//Operatorfunktionen:
Complex Complex::operator+(Complex& z)
{
	return Complex(Realteil + z.getRealteil(), Imaginärteil + z.getImaginärteil());
}
Complex Complex::operator-(Complex& z)
{
	return Complex(Realteil - z.getRealteil(), Imaginärteil - z.getImaginärteil());
}
