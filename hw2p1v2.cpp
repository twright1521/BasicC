//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 2, Problem 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include<limits>

using namespace std;

int main ( )
{	
	double a,b,c,sum,avg,prod;
	bool valid_input = false;
	
	cout<<setiosflags(ios::showpoint | ios::fixed);
	cout.precision(2);
	
	cout<<"Input three different integers:\n";
	

	do {		//Validates the input for Integer 1  and loops until valid input is secured
        cout<<"Integer 1:";cin>>a;			//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    	} while (!valid_input);
	
	do {		//Validates the input for Integer 2  and loops until valid input is secured
        cout<<"Integer 2:";cin>>b;			//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    	} while (!valid_input);
	
	do {		//Validates the input for Integer 3  and loops until valid input is secured
        cout<<"Integer 3:";cin>>c;			//This prevents unwanted characters from crashing the program

        if (!(valid_input = cin.good())) {
            cout << "That input is invalid!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    	} while (!valid_input);



	sum=a+b+c;
	avg=sum/3;
	prod=a*b*c;
	
	cout<<"\nSum is "<<sum
		<<"\nAverage is "<<avg
		<<"\nProduct is "<<prod;
	
	//Chain of nested 'if-else' statements to acheive desired output
	//13 possible outcomes

	if (a<b and a<c) {
		cout<<"\nSmallest is "<<a;
			if (b<=c) {
			cout<<"\nLargest is "<<c;}
			else {
			cout<<"\nLargest is "<<b;}}
	else { if (b<a and b<c) {
			cout<<"\nSmallest is "<<b;
				if (a<=c){
				cout<<"\nLargest is "<<c;}
				else {cout<<"\nLargest is "<<a;}}
		else{ if (c<a and c<b) {
				cout<<"\nSmallest is "<<c;
					if (a<=b) {
					cout<<"\nLargest is "<<b;}
					else {cout<<"\nLargest is "<<a;}}
			else { if (a==b and a==c) {
					cout<<"\nAll values equal "<<a;}
					else { if (c>a and a==b) {
							cout<<"\nSmallest is "<<a;
							cout<<"\nLargest is "<<c;}
							else { if (a>c and c==b) {
									cout<<"\nSmallest is "<<c;
									cout<<"\nLargest is "<<a;}
									else { if (b>a and a==c) {
											cout<<"\nSmallest is "<<a;
											cout<<"\nLargest is "<<b;}
	}}}}}}
	
	
	
	return 0;
}
