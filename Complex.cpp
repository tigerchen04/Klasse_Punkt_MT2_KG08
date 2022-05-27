#include "Complex.h"

Complex::Complex(double RT, double IT)
{
	Realteil = RT;
	Imaginärteil = IT;
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
	double Imaginärteil = IT;
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

//C.4.15.1 
Complex operator/(Complex& z1, Complex& z2)
{
	double a;
	double b;
	double c;
	double d;

	a = z1.getRealteil();
	b = z1.getImaginärteil();
	c = z2.getRealteil();
	d = z2.getImaginärteil();
	
	if (c == 0 && d == 0)
	{
		throw invalid_argument("Division durch 0 nicht möglich!");
	}

	double berechneter_Realteil;
	double berechneter_Imaginärteil;

	berechneter_Realteil = (a * c + b * d) / (c * c + d * d);
	berechneter_Imaginärteil = (b * c - a * d) / (c * c + d * d);

	return Complex(berechneter_Realteil, berechneter_Imaginärteil);
}
