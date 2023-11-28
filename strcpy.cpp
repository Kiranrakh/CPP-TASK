#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[10],str2[10];
	cout<<"enter your string:";
	cin>>str;
	strcpy(str2,str);
	cout<<str2;
	return 0;
}
