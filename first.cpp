#include<iostream>
using namespace std;
int main()
{
	int x,y,z,ch;
	cout<<"enter any two no:";
	cin>>x>>y;
	cout<<"enter your choise:";
	cin>>ch;
	if(ch==1)
	{
		z=x+y;
		cout<<"addition="<<z;
	}
	else if(ch==2)
	{
		z=x-y;
		cout<<"subtraction="<<z;
	}
		else if(ch==3)
	{
		z=x*y;
		cout<<"multiplication="<<z;
	}
		else if(ch==4)
	{
		z=x/y;
		cout<<"division="<<z;
	}
	return 0;
}
