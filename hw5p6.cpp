//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 6



double tax(double);


double tax(double x)
{
	double tax;
	
	if (x>80000){
		tax=(.1*(x-50000))+(.05*20000)+(.02*15000);
		return tax;
	}
	if (x<=80000 && x>50000){
		tax=(.05*(x-30000))+(.02*15000);
		return tax;
	}
	if (x<=30000){
		tax=(.02*(x-15000));
		return tax;
	}
}
