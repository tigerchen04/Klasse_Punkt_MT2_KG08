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

//Überladungen:
ostream& operator<< (ostream& s, Complex& z)
{
	s << z.getRealteil() << (z.getImaginärteil() >= 0.0 ? "+" : " ") << z.getImaginärteil() << "i";
	return s;
}
istream& operator>> (istream& s, Complex& z)
{
	double input;
	cout << "Realteil der komplexen Zahl:\n";
	s >> input;
	z.setRealteil(input);

	cout << "Imaginaerteil der komplexen Zahl:\n";
	s >> input;
	z.setImaginärteil(input);

	return s;
}
