//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Lab 4, Version 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

const int ROWS=6; 
const int COLS=5; 
void display(int [ROWS][COLS]); //Function for displaying array 
void arraysum(int [ROWS][COLS], int [ROWS][COLS], int [ROWS][COLS]);	//Function to add together two arrays

int main() 
{ 
	int first[ROWS][COLS] = {0,5,10,15,20, 
							25,30,35,40,45, 
							50,55,60,65,70, 
							75,80,85,90,95, 
							100,105,110,115,120, 
							125,130,135,140,145}; 
	int second[ROWS][COLS] = {145,140,135,130,125,
							120,115,110,105,100,
							95,90,85,80,75,
							70,65,60,55,50,
							45,40,35,30,25,
							20,15,10,5,0};
	int sum[ROWS][COLS];
	
	arraysum(first, second, sum);
	cout<<"Table 1\n";
	display(first);
	cout<<"\nTable 2\n";
	display(second);
	cout<<"\nSum of Table 1 and Table 2\n";
	display(sum);
	
	
	return 0; 
	
} 

void display(int nums[ROWS][COLS]) 
{ 
	
	for (int i=0;  i<ROWS; i++)	{ 
		for (int j=0; j<COLS; j++) 
		cout << setw(4) << nums[i][j]; 
		cout << endl; }
		
} 

void arraysum(int array1[ROWS][COLS], int array2[ROWS][COLS], int sum[ROWS][COLS])
{
	for (int i=0;  i<ROWS; i++)	{ 
		for (int j=0; j<COLS; j++) 
		sum[i][j]=array1[i][j]+array2[i][j]; }
}


