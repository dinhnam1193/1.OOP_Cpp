#include <iostream>
#include <stdio.h>

using namespace std;
class fraction
{
private:
	int denominator;
	int numerator;

public:
	fraction() {
	}
	fraction(int numerator, int denominator) {
		this->denominator = denominator;
		this->numerator = numerator;
	}
	void show();
public:
	int getDenominator() {
		return denominator;
	}
	void setDenominator(int denominator) {
		this->denominator = denominator;
	}
	int getNumerator() {
		return numerator;
	}
	void setNumerator(int numerator) {
		this->numerator = numerator;
	}
	fraction operator+(const fraction& b) {
		fraction f;
		f.setDenominator(this->denominator + b.denominator);
		f.setNumerator(this->numerator + b.numerator);
		return f;
	}
};

void fraction::show() {
	
}
int main()
{
	fraction frac1(1, 2);
	fraction frac2(3, 4);
	fraction frac3 = frac1 + frac2;
	cout << "fraction: " << frac3.getNumerator() << "/" << frac3.getDenominator();
	
	return 0;
}