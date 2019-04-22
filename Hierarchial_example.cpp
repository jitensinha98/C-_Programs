#include<iostream>
using namespace std;
int x,y;
class A
	{
	public:
		void getData()
			{
			cout << "Enter two numbers : \n";
			cin >> x;
			cin >> y;
			}
	};
class B : public A
	{
	public:
		void sum()
			{
			int sum = 0;
			sum=x+y;
			cout << "The Sum is "<<sum<<"\n";
			}
	};
class C : public A
	{
	public:
		void subtract()
			{
			int sub = 0;
			sub = x - y;
			cout << "The Difference is "<<sub<<"\n";
			}
	};
class D : public A
	{
	public:
		void mul()
			{
			int m;
			m = x * y;
			cout << "The Product is "<<m<<"\n";
			}
	};
int main()
	{
	B obj1;
	C obj2;
	D obj3;
	obj1.getData();
	obj1.sum();
	obj2.subtract();
	obj3.mul();
	}
	
	
	
