#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout <<"enter n val";
	cin >>n;
	int arr[n];
	for (i=0;i<n;j++)
	{
		cin >>arr[i];
	}
	
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (arr[j]==arr[j+1])
			{
				
				cout <<arr[i];
			}
		}
	}
	
	
}
