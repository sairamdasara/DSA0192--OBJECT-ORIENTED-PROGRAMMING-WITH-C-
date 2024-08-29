#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout <<"enter a and b";
	cin >>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout <<"value of a"<<a<<endl;
	cout <<"value of b"<<b<<endl;
}
