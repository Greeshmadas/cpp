#include<iostream>
using namespace std;

int add(int x)
{
	return x;
}
int add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
int add(int x,int y,int z,int a)
{
	return x+y+z+a;
}

int main()
{
	cout<<"add(10)="<<add(10)<<endl;
	cout<<"add(10,20)="<<add(10,20)<<endl;
		
	cout<<"add(10,20,30)="<<add(10,20,30)<<endl;
	cout<<"add(10,20,30,40)="<<add(10,20,30,40)<<endl;

}
