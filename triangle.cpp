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
	int n;
	
	cout<<"Input an integer:";
	cin>>n;

	for (int j=1; j<=n; j++) {
	
	for (int y=1; y<=j; y++) 
		cout<<"*";
	for (int k=1; k<=2*(n-j); k++)
		cout<<" ";
	for (int y=1; y<=j; y++) 
		cout<<"*";
	cout<<endl;
	}

	return 0;
}
