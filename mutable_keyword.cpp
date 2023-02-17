	/*MUTABLE IS A KEYWORD WHICH IS USED TO ALLOW A PARTICULAR DATA
	 * MEMBER OF CONSTATNT OBJECT TO BE MODIFIED  */

#include<iostream>
using namespace std;
struct A
{
	int x;
	mutable int y;
	int z;
};
int main()
{
	const struct A var={10,100,1000};
	//var.x=20; error coa structure var is constant
	var.y=200; 	// we used mutable keyword for y eventhough struct var is constant we can change value of y
	//var.z=2000; error coz structure var is constatnt
	
	cout<<"var.x="<<var.x<<endl;
	cout<<"var.y="<<var.y<<endl;
	cout<<"var.z="<<var.z<<endl;
}
