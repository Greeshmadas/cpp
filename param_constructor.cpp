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
		}
		Employee(string name,string company, int age)
		{
			Name=name;
			Company=company;
			Age=age;
		}
};
int main()
{
	Employee employee1=Employee("Mary","Amazon",28);
	employee1.Introduce_Yourself();

	Employee employee2=Employee("Greeshma","Google",32);
	employee2.Introduce_Yourself();
}
