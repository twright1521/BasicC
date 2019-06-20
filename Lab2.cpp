//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Lab 2, Version 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int main ( )
{	
	double y, x;
	
	cout<<setiosflags(ios::showpoint | ios::fixed);
	cout.precision(1);
	
	cout<<"   x  |  y\n------|------"<<endl;
	
	for (x=5; x<=10; x+=0.2) {
		y=3*pow(x,5)-2*pow(x,3)+x;
		cout<<setw(5)<<x<<" | "<<setw(5)<<y<<endl;
	}
	
	return 0;
}
