//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 1


double second(double, double, double);


double second(double hr, double min, double sec) 
{
	double total;
	
	total=((hr*60*60)+(min*60)+sec);
	
	return total;
}
