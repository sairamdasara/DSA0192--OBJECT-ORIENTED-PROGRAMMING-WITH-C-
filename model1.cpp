#include<iostream>
using namespace std;
int main()
{
	int num;
	cout <<"enter a number";
	cin >>num;
	int sum=0,i;
	for (i=1;i<num;i++)
	{
		if (num%i==0)
	{
		sum =sum +i;
	}
}
	if (sum==num)
	{
		cout <<"perfect number";
	}
	else
	{
		cout <<"not a perfect number";
	}
}
