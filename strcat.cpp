#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10],str2[10];
	cout<<"enter your string:";
	cin>>str;
	cout<<"enter your second string: ";
	cin>>str2;
	strcat(str,str2);
	cout<<str;
	return 0;
}
