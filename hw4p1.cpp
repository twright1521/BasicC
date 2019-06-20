//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 4, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include<limits>

using namespace std;

int main ( )
{	
	double hrs, rate, pay;
	bool valid_input=false;
	
	cout<<setiosflags(ios::showpoint | ios::fixed);
	cout.precision(2);
	
	cout<<"This program calculates the weeks pay of your employees individually.";
	
	while (hrs>=0){ 
				
		do {		//This prevents unwanted characters from crashing the program, variable "hrs"
        	cout<<"\n\nInput hours worked (-1 to end):";
			cin>>hrs;			

        	if (!(valid_input = cin.good()) || hrs<-1 || (hrs>-1 && hrs<0)) {
        	    cout << "That input is invalid!\n";
        	    cin.clear();
        	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
        	}
    		} while (!valid_input || hrs<-1 || (hrs>-1 && hrs<0)); //Accepts positive values only and -1 as sentinel
	
		if (hrs==-1)
			cout<<endl;
		else {
		
			do {		//This prevents unwanted characters from crashing the program, variable "rate"
        	cout<<"Input hourly pay rate for employee ($00.00):";
			cin>>rate;			

        	if (!(valid_input = cin.good())) {
        	    cout << "That input is invalid!\n";
       	    cin.clear();
       	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
       	 	}
    		} while (!valid_input || rate<=0); //Accepts only positive values for "rate"
	
		if (hrs<=40){
			pay=hrs*rate;
			cout<<"Salary is $"<<pay;
			}
		else {
			pay=(40*rate)+((hrs-40)*(rate*1.5));
			cout<<"Salary is $"<<pay;
			}
	}
	}
	
	return 0;
}
