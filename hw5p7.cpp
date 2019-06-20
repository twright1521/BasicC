//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

double second(double, double, double);
int zero_die( );
void Nrand(int N);
void rectangle(int, int);
bool checkTriangle (double, double, double);
double tax(double);

int main ( )
{
	double hrs, mins, secs, a, b, c, income;
	int N, x, y;
	
	cout<<"This program tests a variety of functions.\n\n";
	
	cout<<"Function 1: Time Conversion to Seconds\n\n"; //Function from Problem 1
	
	cout<<"Input the number of hours:"; cin>>hrs;
	cout<<"                    minutes:"; cin>>mins;
	cout<<"                    seconds:"; cin>>secs;
	
	cout<<"The total number of seconds is "<<second(hrs, mins, secs)<<"\n\n";
	
	cout<<"Function 2: 10 Sided Die / Random Number Output 0 - 9\n\n"; //Function from Problem 2
	
	cout<<"Your random number is "<<zero_die()<<"\n\n";
	
	cout<<"Function 3: N-Digit Random Number\n\n"; //Function from Problem 3
	
	cout<<"How many digits would you like in your number?:";
	cin>>N;
	
	cout<<"\nHere are "<<N<<" numbers with "<<N<<" digits.\n\n";
	
	for(int j=1; j<=N; j++)
		Nrand(N);
	
	cout<<"\n\n";
	
	cout<<"Function 4: Star-Spangled Rectangle\n\n"; //Function from Problem 4
	
	cout<<"Input a positive integer for the length:"; cin>>x;
	cout<<"                                 height:"; cin>>y;
	
	rectangle(x, y);
	cout<<"\n\n";
	
	cout<<"Function 5: Right Triangle Check\n\n"; //Function from Problem 5
	
	cout<<"This program determines if the three numbers input\n would form the sides of a right triangle.\n\n";
	
	cout<<"Input a number:";cin>>a;
	cout<<"Input another number:";cin>>b;
	cout<<"Input a third number:";cin>>c;
	cout<<endl;
	
	if(checkTriangle(a, b, c))
		cout<<"This is a right triangle.\n\n";
	else
		cout<<"This is not a right triangle.\n\n";
	
	cout<<"Function 6: Income Tax Calculator\n\n"; //Function from Problem 6
	
	cout<<"Input your annual income:";
	cin>>income;
	cout<<"\nYour income tax is "<<tax(income);
	
	return 0;
}

double second(double hr, double min, double sec)
{
	double total;
	
	total=((hr*60*60)+(min*60)+sec);
	
	return total;
}

int zero_die( )
{	
	int x;
	
	x=rand()%10;
	
	return x;	
}

void Nrand(int N)
{
	for (int i=1; i<=N; i++)
		cout<<zero_die();
	
	cout<<endl;
	
}

void rectangle(int length, int height)
{
	for (int i=1; i<=height; i++) {
		for (int j=1; j<=length; j++){
			cout<<"* "; }
		cout<<endl; 
	}
}

bool checkTriangle(double x, double y, double z)
{
	if (x==sqrt(y*y+z*z))
		return true;
	if (y==sqrt(x*x+z*z))
		return true;
	if (z==sqrt(x*x+y*y))
		return true;
		
	return false;
}

double tax(double x)
{
	double tax;
	
	if (x>80000){
		tax=(.1*(x-50000))+(.05*20000)+(.02*15000);
		return tax;
	}
	if (x<=80000 && x>50000){
		tax=(.05*(x-30000))+(.02*15000);
		return tax;
	}
	if (x<=30000){
		tax=(.02*(x-15000));
		return tax;
	}
}
