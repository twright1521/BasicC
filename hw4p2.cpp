//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 4, Problem 2

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include<limits>

using namespace std;

int main ( )
{	
	int x, y, max; 
	bool valid_input=false;
	
	cout<<"This program displays all integers and their factors between 1 and a designated integer.\n\n";
	
	do {		//This prevents unwanted characters from crashing the program
        cout<<"Input a positive integer:";
		cin>>max; 			

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    	} while (!valid_input || max<1);
	
	for (y=1; y<=max; y++){
			cout<<endl<<setw(4)<<y<<":";
		if (y==1) { 					//1 must be declared separately
			cout<<"    1"; }
		else { 	
				for(x=y; x>=2; x=x-1){	//This for loop displays the factors of y
					if (y%x==0){
						cout<<setw(5)<<y/x;}}
				cout<<setw(5)<<y; }
		}
	
	return x;
}




