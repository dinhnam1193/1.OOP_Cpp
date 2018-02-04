#include <iostream>
#include <stdio.h>

using namespace std;
class fraction
{
private:
	int denominator;
	int numerator;

public:
	fraction(int numerator, int denominator) {
		this->denominator = denominator;
		this->numerator = numerator;
	}
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
};

int main()
{
	fraction frac1(1, 2);
	
	cout << "fraction: " << frac1.getNumerator() << "/" << frac1.getDenominator();
	
	return 0;
}