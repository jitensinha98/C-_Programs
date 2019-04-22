#include<iostream>
using namespace std;
class Power
	{
	public:
	int power(int a,int b)
		{
		int i,p=1;
		for (i=1;i<=b;i++)
			{
			p=p*a;
			}
		return p;
		}
	};
int main()
	{
	Power p;
	int x,y,result=0;
	cout << "Enter a number : \n";
	cin >> x;
	cout << "Enter power : \n";
	cin >> y;
	result = p.power(x,y);
	cout << "The result is "<<result<<"\n";
	return 0;
	}

