#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

const int ROWS = 3; 
const int COLS = 4; 
void display(int [ROWS][COLS]); // function prototype 

int main() 
{ 
	int val[ROWS][COLS] = {8,16,9,52, 3,15,27,6, 14,25,2,10}; 
	
	display(val); 
	
	return 0; 
	
} 

void display(int nums[ROWS][COLS]) 
{
	int rownum, colnum; 
	
	for (rownum = 0; rownum < ROWS; rownum++)	{ 
		for (colnum = 0; colnum < COLS; colnum++) 
		cout << setw(4) << nums[rownum][colnum]; 
		cout << endl; }
		
		 return; } 


