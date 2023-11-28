#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter your choice:";
	cin>>n;
	switch(n)
	{
		case 1:cout<<"january";
		break;
		case 2:cout<<"feb";
		break;
     	case 3:cout<<"march";
		break;
	   case 4:cout<<"april";
		break;
		default:cout<<"wrong choice ";
		break;
	}
	return 0;
	
	}

