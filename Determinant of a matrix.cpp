/*
 * C++ Program to Find the Determinant of a Given Matrix
 */
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double d = 0;
double det(int n, double mat[10][10])
{
    int c, subi, i, j, subj;
    double submat[10][10];  
    if (n == 2) 
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {  
        for(c = 0; c < n; c++)
        {  
            subi = 0;  
            for(i = 1; i < n; i++)
            {  
                subj = 0;
                for(j = 0; j < n; j++)
                {    
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
        d = d + (pow(-1 ,c) * mat[0][c] * det(n - 1 ,submat));
        }
    }
    return d;
}
int main()
{
	char x;
	int y=1;
	
	do 
	{
    	int n;
    	cout<<"Enter the order of matrix:" ;
    	cin>>n;
   		double mat[10][10];
    	int i, j;
    	cout<<"\nEnter the elements row by row:"<<endl;
    	for(i=0;i<n;i++)
    	{
    	    for(j=0;j<n;j++)
    	    {
    	    	cout<<"Row "<< i+1 << " Element "<< j+1<<": ";
    	        cin>>mat[i][j];
    	    }
    	}
    	cout<<"\nDeterminant = "<<det(n,mat);
    	
    	cout<<"\n\nAnother Determinant? (Y/N): ";
    	cin>>x;
    	cout<<"\n\n";
    	if (x == 'N')
    	{
			y = 0;
		}
		d = 0;
		getch();
	} while (y == 1);
	
	
}
