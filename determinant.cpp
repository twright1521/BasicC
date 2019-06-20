/*
 * C++ Program to Find the Determinant of a Given Matrix
 */
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double det(int, double mat[][]);
int main()
{
    int n;
    cout<<"enter the order of matrix" ;
    cin>>n;
    double mat[n][n];
    int i, j;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\ndeterminant"<<det(n, mat[n][n]);
    getch();
}

double d = 0;

double det(int n, double mat[n][n])
{
    int c, subi, i, j, subj;
    double submat[n][n];  
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
