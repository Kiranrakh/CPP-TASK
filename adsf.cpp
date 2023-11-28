#include<iostream>
using namespace std;
int print(int a)
{
	if(a<1)
	return 0;
	else
	return 1+print(a/2);
}
int main()
{
	int x;
	x=print(2);
	cout<<x;
}
