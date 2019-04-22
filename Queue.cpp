#include<iostream>
using namespace std;
int front = -1;
int rear = -1;
class Queue
	{
	public:
		void Pop(int a[],int maxsize)
			{
			int data;
			if (front == -1 || front > rear)
				{
				cout << "Queue Underflow .\n";
				}
			else
				{
				data = a[front];
				front++;
				}
			cout << "Data Popped is "<<data<<"\n";
			}
		void Push(int a[],int maxsize)
			{
			int data;
			if (rear != maxsize - 1)
				{
				if (front == -1)
					front = 0;
				cout << "Enter Data to be pushed : \n";
				cin >> data;
				rear = rear + 1;
				a[rear]=data;
				}
			else
				cout << "Array is full...\n";
			}
		void display(int a[])
			{
			int i;
			cout << "Queue is \n";
			for (i=front;i<=rear;i++)
				{
				cout<<a[i]<<"\n";
				}
			}
	};
int main()
	{
	Queue q;
	int ch,maxsize,a[100];
	cout << "Enter the maximum size of Queue :\n";
	cin >> maxsize;
	bool cont = true ;
	cout << "Options:-\n";
	cout << "1) Push\n";
	cout << "2) Pop\n";
	cout << "3) Display\n";
	cout << "4) Exit \n";
	while (cont == true)
	{
	cout << "Enter your choice :\n";
	cin >> ch;
	switch(ch)
	{
	case 1: q.Push(a,maxsize);
		break;
	case 2: q.Pop(a,maxsize);
		break;
	case 3: q.display(a);
		break;
	case 4: cont = false;
		break;
	default : cout << "INVALID INPUT\n";
	}
	}
	}

