//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 3, Problem 3

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int main ( )
{	
	double x, y;
	
	cout<<"Input X coordinate for a point:";
	cin>>x;
	cout<<"Input Y coordinate for a point:";
	cin>>y;
	
	if (x==0){
		if (y==0) { cout<<"The coordinate ("<<x<<","<<y<<") is at the origin.";}
		if (y>0)  { cout<<"The coordinate ("<<x<<","<<y<<") is on the positive y-axis.";}
		if (y<0)  { cout<<"The coordinate ("<<x<<","<<y<<") is on the negative y-axis.";}
		}
	else { if (x>0) {
				if (y==0) { cout<<"The coordinate ("<<x<<","<<y<<") is on the positive x-axis";}
				if (y>0)  { cout<<"The coordinate ("<<x<<","<<y<<") is in quadrant I.";}
				if (y<0)  { cout<<"The coordinate ("<<x<<","<<y<<") is in quadrant IV";}
				}
			else { if (x<0) {
						if (y==0) { cout<<"The coordinate ("<<x<<","<<y<<") is on the negative x-axis";}
						if (y>0)  { cout<<"The coordinate ("<<x<<","<<y<<") is in quadrant II.";}
						if (y<0)  { cout<<"The coordinate ("<<x<<","<<y<<") is in quadrant III";}
					}
				}
		}

	
	return x;
}
