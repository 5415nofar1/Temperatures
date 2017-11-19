
#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

int main()
{
	Celsius c(1);
	Farhrenheit f(1);

	
	cout << c << " is: " << (Farhrenheit)c << endl;
	cout << f << " is: " << (Celsius)f << endl << endl;

	Celsius freezingPoint(0);
	Celsius boilingPoint(100);
	Celsius absoluteZero(-273.15);

	cout << "Boiling point\t Freezing point\t Absolute zero\t" << endl;
	cout << boilingPoint<< "\t\t" << freezingPoint<< "\t\t" << absoluteZero <<"\t\t" << endl;
	cout << (Farhrenheit)boilingPoint << "\t\t" << (Farhrenheit)freezingPoint << "\t\t" << (Farhrenheit)absoluteZero << "\t\t" << endl;

}