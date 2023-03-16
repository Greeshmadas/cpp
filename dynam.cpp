		//dynamic memory allocation in c++

#include<iostream>
using namespace std;
int main()
{
	int *p=new int(100); //allocating memmory for an integer and storing that intiger with a value 100
	cout<<"*p= "<<*p<<endl;
	delete p;

	p=new int[5]{10,20,30,40,50};
	for(int i=0;i<5;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	delete[]p;
}
