#include<iostream>
using namespace std;
int main()
{
	int number,i,sum=0;
	cout<<"enter a number";
	cin >>number;
	for (i=1;i<=number;i++)
	{
		sum=sum+i;
	}
	cout <<"sum of series"<<sum;
}
