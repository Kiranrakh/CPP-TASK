#include<iostream>
using namespace std;
void test(int);

void test(float);
void test(int,float);

int main()
{
	int a=5;
	float b=5.5;
	
	test(a);
	test(b);
	test(a,b);
	return 0;
}
void test(int var)
{
	cout<<"integere number:"<<var<<endl;
}
void test(float var)
{
	cout<<"float number:"<<var<<endl;
}
void test(int var1,float var2)
{
	cout<<"integer number:"<<var1<<endl;
	cout<<"and float number:"<<var2;
}
