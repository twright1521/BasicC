//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 6, Problem 3, Version 1

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>


using namespace std;

const int let=44, big=34;
int linearSearch(int list[][big], int size, int key);
void output(char list[][big], int size, int key);


int main ( )
{	
	int  x, y;
	char i, list[][big]={{"George Washington 1789 - 1797    "}, {"John Adams 1797 - 1801           "}, 
							{"Thomas Jefferson 1801 - 1809     "}, {"James Madison 1809 - 1817        "}, 
							{"James Monroe 1817 - 1825         "}, {"John Q. Adams 1825 - 1829        "},
							{"Andrew Jackson 1829 - 1837       "}, {"Martin Van Buren 1837 - 1841     "},
							{"William H. Harrison 1841         "}, {"John Tyler 1841 - 1845           "},
							{"James K. Polk 1845 - 1849        "}, {"Zachary Taylor 1849 - 1850       "},
							{"Millard Filmore 1850 - 1853      "}, {"Franklin Pierce 1853 - 1857      "},
							{"James Buchanan 1857 - 1861       "}, {"Abraham Lincoln 1861 - 1865      "},
							{"Andrew Johnson 1865 - 1869       "}, {"Ulysses S. Grant 1869 - 1877     "},
							{"Rutherford B. Hayes 1877 - 1881  "}, {"James Garfield 1881              "},
							{"Chester A. Arthur 1881 - 1885    "}, {"Grover Cleveland 1885 - 1889     "},
							{"Benjamin Harrison 1889 - 1893    "}, {"Grover Cleveland 1893 - 1897     "},
							{"William McKinley 1897 - 1901     "}, {"Theodore Roosevelt 1901 - 1909   "},
							{"William H. Taft 1909 - 1913      "}, {"Woodrow Wilson 1913 - 1921       "},
							{"Warren Harding 1921 - 1923       "}, {"Calvin Coolidge 1923 - 1929      "},
							{"Herbert Hoover 1929 - 1933       "}, {"Franklin D. Roosevelt 1933 - 1945"},
							{"Harry S. Truman 1945 - 1953      "}, {"Dwight Eisenhower 1953 - 1961    "},
							{"John F. Kennedy 1961 - 1963      "}, {"Lyndon B. Johnson 1963 - 1969    "},
							{"Richard Nixon 1969 - 1974        "}, {"Gerald Ford 1974 - 1977          "},
							{"Jimmy Carter 1977 - 1981         "}, {"Ronald Reagan 1981- 1989         "},
							{"George H.W. Bush 1989 - 1993     "}, {"Bill Clinton 1993 - 2001         "},
							{"George W. Bush 2001 - 2009       "}, {"Barack Obama 2009 - 2017         "}};
	
	cout<<"Enter the number of a president:";
	cin>>x;
	
	cout<<"The president you searched for and his years in offic are\n ";
	output(list, big, x);
	
	return 0;
}

int linearSearch(char list[44][big], int size, int key) 
{ 
	for (int i = 0; i<size; i++) { 
		if (list[i][0] == key-1) 
		return i; } 
		
	return -1; }
	
void output(char list[44][big], int size, int key)	
{
	for (int i=0; i<size; i++){
		cout<<list[key-1][i];
	}
	
}
	



	
