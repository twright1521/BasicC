//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 7, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ( )
{	
	int x, y=1000, let=26;
	int list[let]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char array[y];
	
	
	cout<<"Enter a string of letters and words etc.:";
	gets(array);
	
	x=strlen(array);
	
	for (char i='a'; i<='z'; i++)
	for (int j=0; j<x; j++) {
		if (array[j]==i)
			list[i-97]+=1;	}
	
	cout<<"\nLetter | Occurance\n";
	cout<<"-------|----------\n";		
	
	for (char k='a'; k<='z'; k++) {
		cout<<"  "<<k<<"    | "<<setw(4)<<list[k-97]<<endl;
	}  

	return 0;
}	
