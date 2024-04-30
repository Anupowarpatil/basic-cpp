#include<iostream>

using namespace std;
class stack
{	
	int max=10;
	int Astack[11];
	int top;

public: void push(int ele)
{
	if(top==max)
	{
		cout<<"your stack is full";
	}
	else
	{
		top=top+1;
		Astack[top]=ele;
	}
}

public: void pop()
{
	if(top==0)
	{
		cout<<"your stack is empty";
	}
	else
	{
		top=top-1;
	}
}
public: void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		cout<<Astack[i];
	}
}
};
int main()
{
	int ele,choice;
	stack s;
	s.push(23);
	s.push(45);
	s.display();
	s.pop();
	s.display();
	/*for(int j=0;j<=4;j++)
	{
	cout<<"1.create stack\n2.insert\n3.delete\n4.Display";
	cout<<"\nSelect your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Stack is created";
		break;
		case 2:
			cout<<"enter element:";
      			cin>>ele;
			s.push(ele);
			s.display();
		break;
		case 3:
			s.pop();
			s.display();
		break;
		case 4:
			s.display();

	}
	}*/
}
