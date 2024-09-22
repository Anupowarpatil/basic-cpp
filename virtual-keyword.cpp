#include<iostream>
using namespace std;

class person{
	public:
		char name[10];
		int age;
        public: void getData()
	{
		cout<<"Enter your Name:";
		cin>>name;
		cout<<"Enter your Age:";
		cin>>age;
	}
};

class Employee : virtual public person
{
	int id,salary;
	public: void getData()
	{	
		cout<<"--Employee info--"<<endl;
		cout<<"Enter your Id:";
		cin>>id;
		cout<<"Enter your Salary:";
		cin>>salary;
	}

	public: void Display()
	{
		cout<<id<<" "<<name<<" "<<age<<" "<<salary;
	}
};
/*
class customer : public person
{
	public:
		char proName[];
		int Quantity;
	public: void getData()
	{
		cout<<"Enter your product name:";
		cin>>proName;
		cout<<"Enter Quantity:";
		cin>>Quantity;
	}
	public: void generateBill()
	{	
		cout<<proName<<" "<<Quantity;
	}
	
};

class EmployeeCustomer : public Employee,public customer{
	
	
	
};
*/
int main()
{
	person *per;
	Employee emp;
	per=&emp;
	per->getData();
	emp.Display();
	/*customer cu;
	per=&cu;
	per->getData();
	cu.generateBill();*/
}
