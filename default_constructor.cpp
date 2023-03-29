	/*WRITE A PROGRAM INTRODUCING EMPLOYESS WITH NAME AGE AND COMPANY NAME
	 * USING DEFAULT CONSTROUCTOR */

#include<iostream>
#include<string>
using namespace std;
class Employee{
	public:
		string Name;
		string Company;
		int Age;
		void Introduce_Yourself()
		{
			cout<<"Name-"<<Name<<endl;	
			cout<<"Company-"<<Company<<endl;
			cout<<"Age-"<<Age<<endl;
			cout<<endl;
		}
};

int main()
{
	Employee employee1;
	employee1.Name="Janeelia";
	employee1.Company="Amazon";
	employee1.Age=29;
	employee1.Introduce_Yourself();

	Employee employee2={"Greeshma","Google",32};
	employee2.Introduce_Yourself();
}
