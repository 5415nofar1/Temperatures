#include "Fahrenheit.h"

Farhrenheit::Farhrenheit(double f)
{
	m_f = f;
}

//Farhrenheit::operator Celsius() const
//{
//	double c = (getFarhrenheit() - 32) / 1.8;
//	return Celsius(c);
//}

ostream & operator<<(ostream & os, const Farhrenheit & Farhrenheit)
{
	os << Farhrenheit.getFarhrenheit() << "\370F ";

	return os;
}
