//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 3, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int main ( )
{	
	double x;
	
	cout<<"Input student's numerical grade:";
	cin>>x;
	
	if (x >=90)
		cout<<"Students grade is A";
	
	if (x<90 && x>=80)
		cout<<"Students grade is B";
	
	if (x<80 && x>=70)
		cout<<"Students grade is C";
	
	if (x<70 && x>=60)
		cout<<"Students grade is D";
		
	if (x<60)
		cout<<"Students grade is F";
		
	
	return x;
}
