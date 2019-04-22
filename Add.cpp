#include<iostream>
using namespace std;
class Add
	{
	public:
	int add(int a,int b)
		{
		int c;
		c=a+b;
		return c;
		}
	};
int main()
	{
	Add a;
	int x,y,z;
	cout<<"Enter two numbers : \n";
	cin>>x>>y;
	z=a.add(x,y);
	cout<<"The sum is "<<z<<"\n";
	return 0;
	}

