//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 4, Problem 3, Version 2

#include<iostream>
#include<iomanip>
#include<cmath>
#include<limits>

using namespace std;


int main()
{
   	int n, i, j, flag;
   	bool valid_input=false;
   	
    cout<<"This program displays the prime numbers between 1 and a designated integer.\n\n";
	
	do {		//This prevents unwanted characters from crashing the program
       	cout<<"Input a positive integer:";
		cin>>n; 			

        if (!(valid_input=cin.good())) {
            cout<<"That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    	} while (!valid_input || n<1);
    
   	for(i=2; i<n; i++){  //Outputs prime numbers between 2 and input "n" 
      
	  for (j=2; j<=i/2; j++){ //Loop that determines if number is prime 
        flag=0;		//Flag must be redeclared as zero in every loop
		if(i%j==0){
            flag=1;
            break;}
        }
        
      if(flag==0)
         cout<<" "<<i;
   	}
   	
	return 0;
}








