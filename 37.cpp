#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"enter n val";
	cin >>n;
	int i,j,k;
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for (k=1;k<=2*i-1;k++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
}
