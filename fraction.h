class Fraction
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
	Fraction operator+(Fraction &); //addition with overloading operator
	Fraction operator-(Fraction &); //subtraction with overloading operator
	Fraction operator*(Fraction &); //mulitplication with overloading operator
	Fraction operator/(Fraction &); //division with overloading operator 
}
