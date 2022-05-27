#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
	double Realteil;
	double Imaginärteil;

public:
	//allgemeiner Konstruktor:
	Complex(double Realteil, double Imaginärteil);

	//Setter- und Gettermethoden:
	void setRealteil(double Realteil);
	double getRealteil();

	void setImaginärteil(double Imaginärteil);
	double getImaginärteil();

	//Operatorfunktionen:
	Complex operator+(Complex& z);
	Complex operator-(Complex& z);
};


//Überladungen:
ostream& operator<< (ostream& s, Complex& z);
istream& operator>> (istream& s, Complex& z);
