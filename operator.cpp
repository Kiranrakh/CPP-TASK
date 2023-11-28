#include<iostream>
using namespace std;
int main()
{
	int op,a,b,c;
	cout<<"enter any two no:";
	cin>>a>>b;
	cout<<"enter your operation no:";
	cin>>op;
	switch(op)
	{
		case 1:c=a+b;
		cout<<"addition="<<c;
		break;
		case 2:c=a-b;
		cout<<"addition="<<c;
		
		break;
		default :cout<<"wrong choice:";
		break;
		
	}
	return 0;
}

