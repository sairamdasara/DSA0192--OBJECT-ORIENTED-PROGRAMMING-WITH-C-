#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cout <<"enter no of elements";
	cin >>n;
	int arr[n];
	int i,j;
	for (i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for (i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
