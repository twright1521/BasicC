//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework #, Problem #

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>



using namespace std;

int main ( )
{	
	double a, b, c, D;
	
	cout<<"This program outputs the roots of a quadratic equation of the form ax^2 + bx + c = 0\n\n";
	cout<<"Enter a:";cin>>a;
	cout<<"Enter b:";cin>>b;
	cout<<"Enter c:";cin>>c;
	
	D=((b*b)-(4*a*c));
	
	if (a==0)
		cout<<"There are no roots. Equation is Linear.";
	else {
		
		if (D>0)
			cout<<"There are two real roots "<<((0 - b + sqrt(D))/(2 * a))<<" and "<<((0 - b - sqrt(D))/(2 * a));
		else {
	
			if (D==0)
				cout<<"There is only one root "<<((0 - b)/(2 * a));
			else {
			
				if (D<0)
					cout<<"There are no real roots for this quadratic equation.";
	}}}
	
	cout<<D;
	return 0;
}
