#include <iostream>
#include <stdio.h>
#include <stdint.h>

#define PI 3.14159

using namespace std;

class circle
{

public:
	circle() :r_(0), x_(0), y_(0) {};
	circle(uint32_t r, int x, int y) :r_(r), x_(x), y_(y) {};
	~circle();
private:
	uint32_t r_;
	int x_, y_;
public:
	void setR(uint32_t r) {
		this->r_ = r;
	}
	uint32_t getR() {
		return this->r_;
	}

	void setX(int x) {
		this->x_ = x;
	}
	int getX() {
		return this->x_;
	}

	void setY(int y) {
		this->y_ = y;
	}
	int getY() {
		return this->y_;
	}

	void setCircle(uint32_t r, int x, int y) {
		this->setR(r);
		this->setX(x);
		this->setY(y);
	}

	double_t Area() {
		return PI * this->getR()*this->getR();
	}

	double_t Perimeter() {
		return 2 * PI*this->getR();
	}

	void show() {
		cout << "R = " << this->getR() << " X= " << this->getX() << " Y= " << this->getY() << endl;
		cout << "Area: " << this->Area() << endl;
		cout << "Perimeter: " << this->Perimeter() << endl;
	}
};



circle::~circle()
{
}


int main()
{
	circle c;
	c.setCircle(1, 2, 3);
	c.show();

	circle c1(3, 4, 2);
	c1.show();

	getchar();
	return 0;
}