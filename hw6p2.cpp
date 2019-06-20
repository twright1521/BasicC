//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 6, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

double calcavg(double [], int);
double variance(double [], int, double);

int main ( )
{	
	int maxels=14;
	double testvals[maxels];
	
	cout<<"This program calculates the average and variance of\n the user defined values of a one domensional array.\n\n";
	
	for (int k=0; k<maxels; k++) {	//For-loop for entering values in testvals[]
		cout<<"Enter value "<<k+1<<" of the array:";
		cin>>testvals[k]; }
	

	cout<<"\nThe average of the values is "<<calcavg(testvals, maxels);
	cout<<"\nThe variance of the values is "<<variance(testvals, maxels, calcavg(testvals, maxels));
	
	return 0;
}

double calcavg(double testvals[], int max)
{	
	double avg, total=0;

	for (int i=0; i<max; i++)
		total+=testvals[i];
		
	avg=total/max;
	
	return avg;
}

double variance(double testvals[], int max, double avg)
{
	double var, total=0;
	
	for (int j=0; j<max; j++)
		total+=pow(testvals[j]-avg, 2);
		
	var=total/max;
	
	return var;
}
