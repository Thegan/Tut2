#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction Input();

int main()
{
	Fraction X, Y, result;
	cout << "For Fraction X" << endl;
	X = InputFraction();
	cout << "For Fraction Y" << endl;
	Y = InputFraction();
	
	cout << "X-Y" << endl;
	result = X - Y;
	result.Print();

	cout << "Xclass Fraction
{
private:
	int numerator;
        int denominator; 
        int wholeNumber;
	void simplify(Fraction &);
public:
	Fraction();
	~Fraction();
	void SetDenominator(int);
	void SetNumerator(int);
	void Print();
	Fraction operator+(Fraction &);//addition with overloading operator
	Fraction operator-(Fraction &);//subtraction with overloading operator
	Fraction operator*(Fraction &); //multiplication with overloading operator
	Fraction operator/(Fraction &);//division with overloading operator
};
+Y" << endl;
	result = X + Y;
	result.Print();

	cout << "X*Y" << endl;
	result = X*Y;
	result.Print();

	cout << "X/Y" << endl;
	result = X/Y;
	result.Print();
}

Fraction Input()
{
	int temp;
	Fraction frac_tion;
	cout << "Enter the fraction numerator:" << endl;
	cin >> temp;
	frac_tion.SetNumerator(temp);
	EnterDenominator:
	cout << "Enter the fraction denominator:" << endl;
	cin >> temp;
	if (temp == 0)
	{
		cout << "zero is an invalid demoninator!" << endl;
		goto EnterDenominator;
	}
	frac_tion.SetDenominator(temp);

	return frac_tion;
}
