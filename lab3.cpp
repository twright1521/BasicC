//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Lab 3, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

double tripleCallByValue(double);

double tripleCallByReference(double&);

int main ( )
{	
	double x;
	
	cout<<"Enter a value for X:";
	cin>>x;
	cout<<endl;
	
	cout<<"Triple the value stored in X is "<<tripleCallByValue(x)<<endl;
	cout<<"Value stored in X is now "<<x<<endl<<endl;
	
	cout<<"Triple the value stored in X is "<<tripleCallByReference(x)<<endl;
	cout<<"The value stored in X is now "<<x;
	

	return 0;
}

double tripleCallByValue(double num)
{
	num = 3*num; 
	
	return num;
}

double tripleCallByReference(double& num)
{
	num = 3*num;
	
	return num;
}
