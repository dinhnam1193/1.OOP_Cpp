#include <iostream>
#include <stdio.h>
#include <stdint.h>

#define PI 3.14159

using namespace std;

class complexNumber
{
private:
	float_t realNum_;
	float_t vitualNum_;

public:
	complexNumber() :realNum_(0), vitualNum_(0) {};
	complexNumber(float_t rNum = 0, float_t vNum = 0) :realNum_(rNum), vitualNum_(vNum) {};
	~complexNumber();

public:
	void setRealNum(float_t rNum) {
		this->realNum_ = rNum;
	}
	float_t getRealNum() {
		return this->realNum_;
	}

	void setVitualNum(float_t vNum) {
		this->vitualNum_ = vNum;
	}
	float_t getVitualNum() {
		return this->vitualNum_;
	}

	void show() {
		cout << this->getRealNum() << " + " << this->getVitualNum() << "j" << endl;
	}

	//Nap trong toan tu cong
	complexNumber operator+(complexNumber& complex) {
		complexNumber complex_t(0, 0);
		complex_t.setRealNum(this->getRealNum() + complex.getRealNum());
		complex_t.setVitualNum(this->getVitualNum() + complex.getVitualNum());
		return complex_t;
	}
	//Nap trong toan tu tru 
	complexNumber operator-(complexNumber& complex) {
		complexNumber complex_t(0, 0);
		complex_t.setRealNum(this->getRealNum() - complex.getRealNum());
		complex_t.setVitualNum(this->getVitualNum() - complex.getVitualNum());
		return complex_t;
	}

	//Nap trong toan tu Nhan(*) 
	complexNumber operator*(complexNumber& complex) {
		complexNumber complex_t(0, 0);
		complex_t.setRealNum((float_t)this->getRealNum() * complex.getRealNum() - \
			(float_t)this->getVitualNum() * complex.getVitualNum());
		complex_t.setVitualNum((this->getRealNum()*complex.getVitualNum()) + \
			(this->getVitualNum()*complex.getRealNum()));
		return complex_t;
	}
	//Nap trong Toan tu chia (/)
	complexNumber operator/(complexNumber& complex) {
		complexNumber complex_t(0, 0);
		complex_t.setRealNum(((float_t)(this->getRealNum()*complex.getRealNum()) + (complex.getVitualNum()*this->getVitualNum())) / \
			((complex.getRealNum()*complex.getRealNum()) + (complex.getVitualNum()*complex.getVitualNum())));

		complex_t.setVitualNum(((float_t)(complex.getRealNum()*this->getVitualNum()) - (complex.getVitualNum()*this->getRealNum())) / ((complex.getRealNum()*complex.getRealNum()) + (complex.getVitualNum()*complex.getVitualNum())));
		return complex_t;
	}

};


complexNumber::~complexNumber()
{
	cout << "DisContractor!" << endl;
}

int main()
{
	cout << 1.5 << endl;
	complexNumber comple1(1, 2.0);

	comple1.show();
	complexNumber comple2(3, -4.0);
	comple2.show();
	complexNumber total(0, 0);
	total = comple1 * comple2;
	total.show();
	complexNumber Subtrac(0, 0);
	Subtrac = comple1 / comple2;
	Subtrac.show();

	getchar();
	return 0;
}