#include<iostream>
using namespace std;
void print(int i)
{
	cout<<"here is int:"<<i<<endl;
}
void print(double f)
{
	cout<<"here is float:"<<f<<endl;
}
void print(char c)
{
	cout<<"here is char:"<<c<<endl;
}
int main()
{
	print(10);
	print(34.5);
	print('A');
	return 0;
}
