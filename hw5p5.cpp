//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 5



bool checkTriangle (double, double, double);


bool checkTriangle(double x, double y, double z)
{
	if (x==sqrt(y*y+z*z))
		return true;
	if (y==sqrt(x*x+z*z))
		return true;
	if (z==sqrt(x*x+y*y))
		return true;
		
	return false;
}
