#include<iostream>
using namespace std;
void myfunction(int n1,int n2,int c)
{
	c=n1;
	n1=n2;
	n2=c;
	cout <<n1 <<","<<n2;
}
int main() {
	int n1,n2,c;
	cout<<"Enter a n1:";
	cin>>n1;
	cout<<"Enter a n2:";
	cin>>n2;
	myfunction(n1,n2,c);
	return 0;
}
