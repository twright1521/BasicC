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
	
	//Here I use a chain of 'if' statements to acheive desired output
	//It is much more specific and organized
	//Whereas nested if-else statements for this is far too messy (unlike in my Raptor program)
	
	if (a<b and a<c and b<=c)
		cout<<"\nSmallest is "<<a
			<<"\nLargest is "<<c;
	if (a<b and a<c and b>c)
		cout<<"\nSmallest is "<<a
			<<"\nLargest is "<<b;
	if (b<a and b<c and a<=c)
		cout<<"\nSmallest is "<<b
			<<"\nLargest is "<<c;
	if (b<a and b<c and a>c)
		cout<<"\nSmallest is "<<b
			<<"\nLargest is "<<a;
	if (c<b and c<a and b<=a)
		cout<<"\nSmallest is "<<c
			<<"\nLargest is "<<a;
	if (c<b and c<a and b>a)
		cout<<"\nSmallest is "<<c
			<<"\nLargest is "<<b;
	if (a==b and a<c)
		cout<<"\nSmallest is "<<a
			<<"\nLargest is "<<c;
	if (c==b and c<a)
		cout<<"\nSmallest is "<<c
			<<"\nLargest is "<<a;
	if (a==c and b>a)
		cout<<"\nSmallest is "<<a
			<<"\nLargest is "<<b;
	if (a==b and a==c)
		cout<<"\nAll values equal "<<a;
			
	return 0;
}
