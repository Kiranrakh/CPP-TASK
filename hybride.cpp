#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void input()
		{
			cout<<"enter value";
		}
		void show()
		{
			cout<<a<<endl;
		}
};
class B:virtual public A
{
	
};
class C:virtual public A
{
	
};
class D:public B,public C
{
	
};
int main()
{
  A obj; B obj1; C obj2;D obj3;
  
  obj.input();
  obj.show();
  
  obj1.input();
  obj1.show();
  
  obj2.input();
  obj2.show();
  
  obj3.input();
  obj3.show();
  return 0;
}
