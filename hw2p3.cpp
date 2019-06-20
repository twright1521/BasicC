//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 2, Problem 3

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>

using namespace std;

int main ( )
{
	double x1, x2, y1, y2, dist;
	bool valid_input = false;
   
	cout<<setiosflags(ios::showpoint | ios::fixed);
	
	cout<<"This program calculates the distance between two points.\nPoints must be expressed in real number values.\n";
	cout<<"Enter the first point:\n";
	
	do {		//Validates the input for X1 coordinate and loops until valid input is secured
        cout<<"X coordinate:";cin>>x1;					//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (!valid_input);
    

	do {		//Validates the input for Y1 coordinate and loops until valid input is secured
        cout<<"Y coordinate:";cin>>y1;					//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (!valid_input);
    
	cout<<"Enter the second point:\n";
	
	do {		//Validates the input for X2 coordinate and loops until valid input is secured
        cout<<"X coordinate:";cin>>x2;					//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (!valid_input);
    
	do {		//Validates the input for Y2 coordinate and loops until valid input is secured
        cout<<"Y coordinate:";cin>>y2;					//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (!valid_input);
    
	cout<<"\n\n";
	
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	cout<<"The distance between the points ("<<setw(6)<<setprecision(2)<<x1<<","<<setw(6)<<setprecision(2)<<y1
		<<") and ("<<setw(6)<<setprecision(2)<<x2<<","<<setw(6)<<setprecision(2)<<y2<<") is "<<setw(8)<<setprecision(4)<<dist;
	
	return 0;
}
