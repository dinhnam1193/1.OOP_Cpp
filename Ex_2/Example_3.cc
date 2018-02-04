#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

class complexNumber
{
private:
	uint32_t realNum_;
	uint32_t vitualNum_;

public:
	complexNumber():realNum_(0),vitualNum_(0){};
	complexNumber(uint32_t rNum = 0, uint32_t vNum = 0) :realNum_(rNum), vitualNum_(vNum){};
	~complexNumber();

public:
	void setRealNum(uint32_t rNum) {
		this->realNum_ = rNum;
	}
	int getRealNum() {
		return this->realNum_;
	}

	void setVitualNum(uint32_t vNum) {
		this->vitualNum_ = vNum;
	}
	int getVitualNum() {
		return this->vitualNum_;
	}

	void show() {
		cout << this->getRealNum() << " + " << this->getVitualNum() << "j" << endl;
	}

	//Nap trong toan tu cong
	complexNumber operator+(complexNumber& complex) {
		complexNumber complex_t(0,0);
		complex_t.setRealNum(this->getRealNum() + complex.getRealNum());
		complex_t.setVitualNum(this->getVitualNum() + complex.getVitualNum());
		return complex_t;
	}
	//Nap trong toan tu tru 
	complexNumber operator-(complexNumber& complex) {
		complexNumber complex_t(0,0);
		complex_t.setRealNum(this->getRealNum() - complex.getRealNum());
		complex_t.setVitualNum(this->getVitualNum() - complex.getVitualNum());
		return complex_t;
	}

	//Nap trong toan tu tru 
	complexNumber operator*(complexNumber& complex) {
		complexNumber complex_t(0,0);
		complex_t.setRealNum(this->getRealNum() * complex.getRealNum());
		complex_t.setVitualNum(this->getVitualNum() * complex.getVitualNum());
		return complex_t;
	}


};


complexNumber::~complexNumber()
{
	cout << "DisContractor!" << endl;
}

int main()
{
	complexNumber comple1(1,2);
	
	comple1.show();
	complexNumber comple2(3,-4);
	comple2.show();
	complexNumber total(0,0);
	total = comple1 + comple2;
	total.show();


	getchar();
	return 0;
}