#include<iostream>
using namespace std;
class Vehicle
{
	public:
		void vehicle()
		{
			cout<<"i am vehicle\n";
			
		}
};
class FourWeeler:public Vehicle
{
	public:
		void fourweeler()
		{
			cout<<"i have four weeler\n";
		}
};
class Car:public FourWeeler
{
	public:
		void car()
		{
			cout<<"i am a car\n";
		}
};
int main()
{
	Car obj;
	obj.car();
	obj.fourweeler();
	obj.vehicle();
	return 0;
}
