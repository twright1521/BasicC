//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 6, Problem 3, Version 2 Recursive Linear Search

#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <string>


using namespace std;

const int let=45, big=3;	//Global constants for array size
std::string input = "";		//Input is also global

int recursiveSearch(std::string list[][big], int size); //Recursive Linear Search Function

int main ( )
{	
	int y;
				//An Array of Presidents
	std::string list[let][big]={{"1","George Washington","1789 - 1797"},	{"2","John Adams","1797 - 1801"}, 
								{"3","Thomas Jefferson","1801 - 1809"}, 	{"4","James Madison","1809 - 1817"}, 
								{"5","James Monroe"," 1817 - 1825"}, 		{"6","John Q. Adams","1825 - 1829"},
								{"7","Andrew Jackson","1829 - 1837"}, 		{"8","Martin Van Buren"," 1837 - 1841"},
								{"9","William H. Harrison","1841"}, 		{"10","John Tyler","1841 - 1845"},
								{"11","James K. Polk","1845 - 1849"}, 		{"12","Zachary Taylor","1849 - 1850"},
								{"13","Millard Filmore","1850 - 1853"}, 	{"14","Franklin Pierce","1853 - 1857"},
								{"15","James Buchanan","1857 - 1861"}, 		{"16","Abraham Lincoln","1861 - 1865"},
								{"17","Andrew Johnson","1865 - 1869"}, 		{"18","Ulysses S. Grant","1869 - 1877"},
								{"19","Rutherford B. Hayes","1877 - 1881"}, {"20","James Garfield","1881"},
								{"21","Chester A. Arthur","1881 - 1885"}, 	{"22","Grover Cleveland","1885 - 1889"},
								{"23","Benjamin Harrison","1889 - 1893"}, 	{"24","Grover Cleveland","1893 - 1897"},
								{"25","William McKinley","1897 - 1901"}, 	{"26","Theodore Roosevelt","1901 - 1909"},
								{"27","William H. Taft","1909 - 1913"}, 	{"28","Woodrow Wilson","1913 - 1921"},
								{"29","Warren Harding","1921 - 1923"}, 		{"30","Calvin Coolidge","1923 - 1929"},
								{"31","Herbert Hoover","1929 - 1933"}, 		{"32","Franklin D. Roosevelt","1933 - 1945"},
								{"33","Harry S. Truman","1945 - 1953"}, 	{"34","Dwight Eisenhower","1953 - 1961"},
								{"35","John F. Kennedy","1961 - 1963"}, 	{"36","Lyndon B. Johnson","1963 - 1969"},
								{"37","Richard Nixon","1969 - 1974"}, 		{"38","Gerald Ford","1974 - 1977"},
								{"39","Jimmy Carter","1977 - 1981"}, 		{"40","Ronald Reagan","1981- 1989"},
								{"41","George H.W. Bush","1989 - 1993"}, 	{"42","Bill Clinton","1993 - 2001"},
								{"43","George W. Bush","2001 - 2009"}, 		{"44","Barack Obama","2009 - 2017"},
								{"45","Donald Trump","2017"}};
	
	cout<<"Enter the full name or number of a president:";

	std::getline(std::cin, input);
	
	y=recursiveSearch(list, let);
	
	
	if (y==44)
		cout<<"\nTrump ain't president yet!";
	else if (y!=-1){
	cout<<"\nThe president you searched for is "<<list[y][1]<<".";
	cout<<"\nHe was in office from "<<list[y][2]<<".";
	}
	else cout<<"\nThere is no corresponding president.";
	
	return 0;
}

int recursiveSearch(std::string list[let][big], int size) //Needed variable 'size' as 'let' is an unchangeable constant
{ 
	size-=1;
      if(size<0){
      return -1;
      }
      else if 
	  		(list[size][1]==input){
      		return size;	}
      else if 
	  		(list[size][0]==input){
      		return size;	}
      else{
      return recursiveSearch(list, size);
      }
    }

	

	



	
