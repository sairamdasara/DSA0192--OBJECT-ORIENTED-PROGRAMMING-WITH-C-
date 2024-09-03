#include<iostream>
using namespace std;
int main()
{
	int r,c,i,k,j,a[10][10],b[10][10],res[10][10];
	cout<<"enter no rows and columns";
	cin >>r>>c;
	
	cout <<"matrix 1";
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			cin >>a[i][j];
		}
	}
	
	cout <<"matrix 2";
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin >>b[i][j];
		}
	}
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<r;j++)
		{
			res[i][j]=0;
			for (k=0;k<c;k++)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			cout <<res[i][j]<<" ";
		}
		cout <<endl;
	}
}
