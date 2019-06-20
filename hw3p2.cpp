//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 3, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int main ( )
{	
	int x;
	
	cout<<"Input drive manufacturer code:";
	cin>>x;
	
	switch(x){
		case 1:
			cout<<"Drive Manufacturer: 3M Corporation";
			break;
		case 2:
			cout<<"Drive Manufacturer: Maxell Corporation";
			break;
		case 3:
			cout<<"Drive Manufacturer: Sony Corporation";
			break;
		case 4:
			cout<<"Drive Manufacturer: Verbatim Corporation";
			break;
		default:
			cout<<"Invalid manufacturer code";
	}
	
	
	return x;
}
