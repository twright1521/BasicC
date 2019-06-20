//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 2, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>

using namespace std;

int main ( )
{	
	int a, b, c, d, e, num;
	
	cout<<"Input a five digit integer:";
	cin>>num; 
	cin.clear();		//These prevent unwanted input from crashing the program
	cin.ignore();
	
	while (num<10000)	//This while loop prevents numbers less than five digits from being input
	{	cout<<"You must input a five digit integer:";		//As well as unwanted characters from crashing the program
		cin>>num;
		cin.clear();
		cin.ignore();
	}
	
	while (num>=100000)		//This while loop prevents numbers greater than five digits from being input
	{	cout<<"You must input a five digit integer:";		//As well as unwanted characters from crashing the program
		cin>>num;
		cin.clear();
		cin.ignore();
	}

	a = num / 10000;		//Calculating separation of digits
	b = num / 1000 % 10;
    c = num / 100 % 10;
    d =  num / 10 % 10;
    e = num % 10;
	
	cout<<"\n"<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;	//Separation of digits
	
	return 0;

}
