#include "Complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double r, double im)
	
{re = r;
img = im;

}
//constructeur de recopie
Complex::Complex(const Complex& c)
{
	this->re = c.re;
	this->img = c.img;
	
}
//la jout d un complex a un autre complex
Complex Complex::operator+(const Complex c) const {
	return Complex(this->re + c.re, this->img + c.img);
}
//l ajout d un complex a un reel
Complex Complex::operator+(double a) const
{
	return Complex(this->re + a, this->img + 0.0);
}


Complex Complex::operator-(Complex c) const
{
	return Complex(this->re - c.re, this->img - c.img);
}

	

Complex Complex::operator-(double b) const
{
	return Complex(this->re - b, this->img );
}


Complex Complex::operator*(Complex c) const
{
	double m1 = this->re* c.re - this->img * c.img;
	 double m2=this->re*c.img+ this->img * c.re; 
 
	 return Complex(m1, m2);

}

Complex Complex::operator*(double d) const
{
	double m3 = this->re * d;
	double m4 = this->img * d;

	return Complex(m3, m4);

}
Complex Complex::operator/(Complex c) const
{


	
	double div1 = (this->re * c.re + this->img * c.img) / (c.re * c.re + c.img * c.img);
	double div2=(this->img*c.re-this->re*c.img)/(c.re * c.re + c.img * c.img);

	return Complex(div1,div2);
}

Complex Complex::operator/(double e) const
{

	
	double div3= this->re / e;
	double div4= this->img / e;

	return Complex(div3, div4);
}

bool Complex::operator==(const Complex& c) const
{

	if (this->re == c.re && this->img == c.img) {
		return true;
	}
	else {
		return false;

	}

}

bool Complex::operator!=(const Complex& c) const
{
	if (this->re != c.re || this->img != c.img){
		return true;
	}
	else {
		return false;
	}
}

bool Complex::operator<(const Complex& c) const
{   
	 double n1 = sqrt(this->re * this->re + this->img * this->img);
	 double n2 = sqrt(c.re * c.re + c.img * c.img);
	if (n1 < n2) {
		return true;
	}
	else {
		return false;
	}
}
bool Complex::operator>(const Complex& c) const
{
	double n1 = sqrt(this->re * this->re + this->img * this->img);
	double n2 = sqrt(c.re * c.re + c.img * c.img);
	if (n1 > n2) {
		return true;
	}
	else {
		return false;
	}
}




void Complex::afficher() const
{
	cout << this->re << "+i" << this->img << endl;

}

Complex::~Complex()
{
	
}