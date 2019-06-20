//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 4, Problem 4

#include<iostream>
#include<iomanip>
#include<cmath>
#include<limits>

using namespace std;

int main()
{	
   	int x, n, i=1;
   	bool valid_input=false;
   	
   	cout<<"This program takes a positive integer input and outputs its digits in reverse order.\n\n";
  
	do {		//This prevents unwanted characters from crashing the program
       	cout<<"Input a positive integer:";
		cin>>n; 			

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    	} while (!valid_input || n<1); //Accepts only positive integers
    
  	do {
		  x=(n/i)%10;
		  cout<<x;
		  
		  i=i*10;		  
	  } while (i<=n);

return x; }





