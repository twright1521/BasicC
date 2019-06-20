//Name: Trevor Wright
//ID: 1712
//MAC102, Section 5422
//Homework 5, Problem 3



int zero_die(int);
void Nrand(int);


int zero_die( )
{	
	int x;
	
	x=rand()%10;
	
	return x;
	
}

void Nrand(int N)
{
	for (int i=1; i<=N; i++)
		cout<<zero_die();
	
	cout<<endl;
	
}
