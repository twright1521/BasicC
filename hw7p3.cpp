//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 7, Problem 3

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

const int MAX=10;
void display(double nums[]); 

int main ( )
{	
	double miles[MAX] = {500, 5000, 400, 4000, 300, 3000, 200, 2000, 100 ,1000}, 
		   gallons[MAX] = {50, 500, 40, 400, 30, 300, 20, 200, 10, 100}, mpg[MAX];
		   
	for (int i=0; i<MAX; i++)
		*(mpg+i) = (*(miles+i)/(*(gallons+i)));
	
	cout<<"Miles\n";
	display(miles);
	
	cout<<"\nGallons\n";
	display(gallons);
	
	cout<<"\nMiles Per Gallon\n";
	display(mpg);
		
	return 0;
}

void display(double nums[MAX]) 
{	
	for (int i= 0; i<MAX; i++)	
		cout << setw(5) << *(nums+i); 
		cout << endl;
		
		 return; } 
		
	
