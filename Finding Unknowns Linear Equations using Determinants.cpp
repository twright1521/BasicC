#include<iostream>   
#include<iomanip>   
#include<cmath>
#include <limits>
#include <stdlib.h> 

using namespace std;
double det(int n, double mat[100][100]);
int main ( )
{	
	int n;
	double value;
	double MAT[100][100];
	double EQ[100];
	double ValMAT[100][100];
	 
    cout<<"Enter the order of matrix:" ;
    cin>>n;
    cout<<"\nEnter the elements:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>MAT[i][j];
        }
    }
    
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<MAT[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    cout<<"\nEnter the equality matrix:\n";
    
    for(int i=0;i<n;i++)
    {
            cin>>EQ[i];
    }
    
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<1;j++)
//        {
//            cout<<EQ[i][j]<<" ";
//        }
//        cout<<endl;
//    }

	cout<<endl;
	
	for(int k=1; k<=n; k++)		//For loop for determining each unknown value
	{
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<n; j++)
			{
				ValMAT[i][j]=MAT[i][j];
			}
		}
		
		for(int f=0; f<n; f++)
		{
			ValMAT[f][k-1]=EQ[f];
		}
		
		
//		cout<<" Matrix "<<k<<endl;
//		for(int i=0;i<n;i++)
//    	{
//        	for(int j=0;j<n;j++)
//       		{
//            cout<<ValMAT[i][j]<<" ";
//        	}
//        cout<<endl;
//    	}

		value = det(n, ValMAT)/det(n, MAT);
	
		if (value == 0 || value < 0 || value > 0)
    		cout<<"Value "<<k<<" = "<<value<<endl;
    		else cout<<"Value "<<k<<" Does not exist"<<endl;
	}  
	
	return 0;
}

double det(int n, double mat[100][100])
{
    int c, subi, i, j, subj;
    double submat[100][100];  
    double d=0;
    
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
