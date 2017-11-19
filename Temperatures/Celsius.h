#pragma once
#include <iostream>
#include "Fahrenheit.h"

using namespace std;


class Celsius
{
private:
	double m_c;

public:
	Celsius(double c);
	Celsius(Farhrenheit &);
	~Celsius() {};

	double getCelsius() const { return m_c; }

	operator Farhrenheit() const;

};

ostream & operator<<(ostream & os, const Celsius & Celsius);