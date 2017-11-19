#pragma once
#include <iostream>
//#include "Celsius.h"
using namespace std;


class Farhrenheit
{
private:
	double m_f;

public:
	Farhrenheit(double f);
	~Farhrenheit() {};

	double getFarhrenheit() const { return m_f; }
	void setFarhrenheit(double f) { m_f = f; }

	//operator Celsius() const;

};

ostream & operator<<(ostream & os, const Farhrenheit & Farhrenheit);