#include<iostream>
using namespace std;
struct A
{
	int x,y;
	void setdata()
	{
		cout<<"setdatafunction"<<endl;
		x=10,y=20;
	}
	void printfunc()
	{
		cout<<"printfunc\n"<<"x-"<<x<<"y-"<<y<<endl;
	}
};

int main()
{
	A obj={1,2};
	cout<<"x-"<<obj.x<<"y-"<<obj.y<<endl;

	A obj2;
	obj2.setdata();
	obj2.printfunc();
}
