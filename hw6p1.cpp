//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 6, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int gcd(int, int);

int main ( )
{	
	int x=-1, y=-1;
	
	cout<<"This program finds the greatest common devisor\n between two non-negative numbers.\n\n";
	
	
	do {
		cout<<"Enter first number:";
		cin>>x;
		cout<<"Enter second number:";
		cin>>y;
		if (x<0 || y<0)
			cout<<"Numbers must be non-negative.\n\n";
	} while (x<0 || y<0);
	
	cout<<"\nGreatest common divisor is "<<gcd(x,y)<<endl<<endl;
	
	
	return 0;

}

int gcd(int x, int y)
{
	if (y==0)
		return x;
	if (y>0)
		return gcd(y, x%y);
}
