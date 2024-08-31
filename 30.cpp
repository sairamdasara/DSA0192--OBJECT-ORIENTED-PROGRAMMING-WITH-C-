#include<iostream>
using namespace std;

int main()
{

int num=1,n;
cout <<"enter n value";
cin >>n;
int i,j;
for (i=1;i<=n;i++)
{
	for (j=1;j<=i;j++)
	{
		cout <<num;
		num++;
	}
	cout <<endl;
}

}
