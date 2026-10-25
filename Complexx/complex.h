
#pragma once
#include<iostream>
class Complex
{
private:
	double re;//partie reel diaal comp
	double img;//partie imaginaire dial comp

public:
	Complex(double, double);
	Complex(const Complex& c);
	// declaration de l'operateur + 
	Complex operator+(Complex c)const;
	Complex operator+(double) const;
	
	Complex operator-(Complex c)const;
	Complex operator-(double) const;

     Complex operator*(Complex c)const;
	Complex operator*(double) const;
 
	Complex operator/(Complex c)const;
	Complex operator/(double) const;

	bool operator==(const Complex& c) const;
	bool operator!=(const Complex& c) const;
	bool operator<(const Complex& c) const;
	bool operator>(const Complex& c) const;

	void afficher() const;
	~Complex();
};
