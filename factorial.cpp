#include<iostream>
using namespace std;
int main()
	{
	int a,i;
	int fact = 1;
	cout << "Enter a number : \n";
	cin >> a;
	for (i=1;i<=a;i++)
		{
		fact = fact * i;
		}
	cout << "The factorial of "<<a<<" is "<<fact<<"\n";
	}

