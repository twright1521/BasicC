//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework #, Problem #

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

int main ( )
{	
	int num;
	
	cout<<"Input number:";
	cin>>num;
	
	switch(num){	//switch only evaluates integer numbers, so num must be initialized as "int num" as done previuosly
		case 1:
			cout<<"This happens when number is 1";
			break;		//Break prevents other cases from being executed after this case
		case 2:
			cout<<"This happens when number is 2";
			break;
		case 3:
			cout<<"This happens when number is 3";
			break;
		case 4:				//If there is no break, then the following cases will also execute
		case 5:
		case 6:
			cout<<"This happens when number is either 4, 5, or 6";
			break;
	}
	
	
	return 0;
}
