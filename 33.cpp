#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str,rev="";
	cout <<"enter a string ";
	cin >>str;
	int i;
	for (i=str.length()-1;i>=0;i--)
	{
		rev=rev+str[i];
	}
	cout <<rev;
	
	if (rev==str)
	{
		cout <<"pallindrome";
	}
	else
	{
		cout <<"not a pallindrome";
	}
}
