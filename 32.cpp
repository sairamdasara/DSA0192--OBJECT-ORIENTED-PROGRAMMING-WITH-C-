#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str="SAVEETHA";
	transform(str.begin(),str.end(),str.begin(),::tolower);
	
	cout <<"str is"<<str;
}
