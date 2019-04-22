#include<iostream>
using namespace std;
int top = -1;
class Stack
	{
	public:
		void Pop(int a[])
			{
			int data;
			if (top != -1)
				{
				data = a[top];
				top=top-1;
				cout << "Popped data is "<<data<<"\n";
				}
			else
				cout <<"Stack is empty...\n";		
			}
		void Push(int a[],int maxsize)
			{
			int data;
			if (top != maxsize)
				{
				cout << "Enter Data to be pushed : \n";
				cin >> data;
				top = top + 1;
				a[top]=data;
				}
			else
				cout << "Array is full...\n";
			}
		void Peek(int a[])
			{
			if (top != -1)
				cout <<"Top data is "<<a[top]<<"\n";
			else
				cout <<"Stack Empty\n";
			}
		void display(int a[])
			{
			int i;
			cout << "Stack is \n";
			for (i=0;i<=top;i++)
				{
				cout<<a[i]<<"\n";
				}
			}
	};
int main()
	{
	Stack s;
	int ch,maxsize,a[100];
	cout << "Enter the maximum size of stack :\n";
	cin >> maxsize;
	bool cont = true ;
	cout << "Options:-\n";
	cout << "1) Push\n";
	cout << "2) Pop\n";
	cout << "3) Peek\n";
	cout << "4) Display\n";
	cout << "5) Exit \n";
	while (cont == true)
	{
	cout << "Enter your choice :\n";
	cin >> ch;
	switch(ch)
	{
	case 1: s.Push(a,maxsize);
		break;
	case 2: s.Pop(a);
		break;
	case 3: s.Peek(a);
		break;
	case 4: s.display(a);
		break;
	case 5: cont = false;
		break;
	default : cout << "INVALID INPUT\n";
	}
	}
	}

