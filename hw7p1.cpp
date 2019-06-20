//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 7, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <stdlib.h> 

using namespace std;

const int runs=36000;
int die();

int main ( )
{	
	double frequency[11]={0,0,0,0,0,0,0,0,0,0,0};
	double prob[11];
	
	for (int i=1; i<=runs; i++)	//Rolling the dice
		frequency[die()-2]+=1;

	cout<<"Number | Frequency\n";
	cout<<"-------|----------\n";
	
	for(int k=0; k<11; k++)		//Display Frequency
		cout<<setw(4)<<k+2<<"   |   "<<setw(4)<<frequency[k]<<endl;
		
	cout<<"\n\nNumber | Probability\n";
	cout<<"-------|------------\n";
	
	for(int j=0; j<11; j++)		//Probability
		prob[j]=(frequency[j]/runs)*100;
	
	for(int h=0; h<11; h++)
		cout<<setw(4)<<h+2<<"   |   "<<setw(4)<<setprecision(2)<<prob[h]<<"%"<<endl;	
	
	return 0;
}

int die ()
{
	return (rand()%6+1)+(rand()%6+1);
}
