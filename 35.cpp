#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,next;
	int i,n;
	cout <<"enter n val";
	cin >>n;
	
	for (i=0;i<n;i++)
	{
		cout <<a<<endl;
		next=a+b;
		a=b;
		b=next;
	}
	
}
