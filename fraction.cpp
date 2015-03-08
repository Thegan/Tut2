#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() 
{
	numerator = 1;
	denominator = 1;
}


Fraction::~Fraction() 
{
	numerator = 0;
	denominator = 0;
}

void Fraction::SetDenominator(int denom) //Set Denominator
{
	denominator = denom;
}

void Fraction::SetNumerator(int numer) //Set Numerator
{
	numerator = numer;
}

void Fraction::Print()
{
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::operator+(Fraction &in) //addition with overloadin operator
{
	Fraction result;
	result.numerator = numerator*in.denominator + in.numerator*denominator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator-(Fraction &in) //subtraction with overloading operator
	Fraction result;
	result.numerator = numerator*in.denominator - denominator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator*(Fraction &in) //multiplication with overloading operator
{
	Fraction result;
	result.numerator = numerator*in.numerator;
	result.denominator = denominator*in.denominator;
	return result;
}

Fraction Fraction::operator/(Fraction &in) //division with overloading operator
{
	Fraction result;
	result.numerator = numerator*in.denominator;
	result.denominator = denominator*in.numerator;
	return result;
}
