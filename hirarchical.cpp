#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;
		void getdata()
		{
			cout<<"enter value of x and y:\n";
			cin>>x>>y;
		}
};
class B:public A
{
	public:
		void product()
		{
			cout<<"\n product ="<<x*y<<endl;
		}
};
class C:public A
{
	public:
		void sum()
		{
			cout<<"\n sum="<<x+y;
		}
};
int main()
{
	B obj1;
	C obj2;
	obj1.getdata();
	obj1.product();
	obj2.getdata();
	obj2.sum();
	return 0;
}
