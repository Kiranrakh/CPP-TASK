#include<iostream>
using namespace std;
class parent
{
	public:
		int a;
		void getdata()
		{
			cout<<"enter the number:";
			cin>>a;
		}
};
class child:public parent
{
		public:
		int b;
	void putdata()
	{
		cout<<"enter the number:";
		cin>>b;
	}
	void sum()
	{
		cout<<"sum="<<(a+b);
	}
};
int main()
{
	child c1;
	c1.getdata();
	c1.putdata();
	c1.sum();
	return 0;
}
