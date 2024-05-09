#include<iostream>
using namespace std;

class Queue
{
	int q[100];
	int front;
	int rear;
	
public:
	Queue()
	{
		front=rear=-1;
	
	}
	
void insert(int element)
	{
		q[++rear]=element;
	}
	
	
int remove()
	{
	
	int temp=q[front];
		if(front==rear)
		{
			front=rear=-1;
		
		}
		else
		{
			front++;
	
		}
		return temp;
	}
	
	void display()
	{
		for(int i=front+1;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}

};


int main()
{
	Queue que;
	que.insert(12);
	que.insert(22);
	que.insert(32);
	que.insert(42);	
	que.insert(52);
	que.display();

	
}
