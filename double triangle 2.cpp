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

	for (int d=1; d<=n; d++)
		cout<<"*";
		
	cout<<endl;
	cout<<" ";
	
	for (int i=1; i<=n-1; i++)
		cout<<"*";
	
	cout<<endl;

	for (int j=1; j<=n-1; j++) {
	
	for (int y=1; y<=j; y++) 
		cout<<"*";
	cout<<" ";
	for (int z=1; z<=n-1-j; z++) 
		cout<<"*";
	cout<<endl;
	}

	for (int d=1; d<=n; d++)
		cout<<"*";

	return 0;
}
