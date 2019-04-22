#include<iostream>
using namespace std;
int main()
	{
	int n,a,b,c,i;
	cout << "Enter Range : \n";
	cin >> n;
	a=0;
	b=1;
	for (i=1;i<=n;i++)
		{
		cout << a << " ";
		c=a+b;
		a=b;
		b=c;
		}
	return 0;
	}

	
