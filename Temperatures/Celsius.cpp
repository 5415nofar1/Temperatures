#include "Celsius.h"

Celsius::Celsius(double c)
{
	m_c = c;
}

Celsius::operator Farhrenheit() const
{
	double f = getCelsius() * 1.8 + 32;
	return Farhrenheit(f);
}

Celsius::Celsius(Farhrenheit & f)
{
	m_c = (f.getFarhrenheit() - 32) / 1.8;
}

ostream & operator<<(ostream & os, const Celsius & Celsius)
{
	os << Celsius.getCelsius() << "\370C ";

	return os;
}
