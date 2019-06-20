//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int zero_die( );

int main ( )
{	

	cout<<zero_die()<<endl;
	
	return 0;
}

int zero_die( )
{	
	int x;
	
	srand(time(NULL));
	
	x=rand()%9;
	
	return x;
	
}
