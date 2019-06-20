//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 4, Problem 3

#include<iostream>
#include<iomanip>
#include<cmath>
#include<limits>

using namespace std;

int check_prime(int); //Function declaration, used to find prime numbers

int main()
{
   	int n, i, flag;
   	bool valid_input=false;
   	
    cout<<"This program displays the prime numbers between 1 and a designated integer.\n\n";
	
	do {		//This prevents unwanted characters from crashing the program
       	cout<<"Input a positive integer:";
		cin>>n; 			

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    	} while (!valid_input || n<1);
    
   	for(i=2; i<n; i++){  //Outputs prime numbers between 2 and input "n" 
      flag=check_prime(i);
      if(flag==0)
         cout<<" "<<i;
   	}
   	
	return 0;
}

int check_prime(int num) //Function to check if number is prime
{
   	int j, flag=0;
   	
   	for (j=2; j<=num/2; j++){
        if(num%j==0){
            flag=1;
            break;}
        }
   	
   	return flag;
}






