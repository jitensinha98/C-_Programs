#include<iostream>
using namespace std;
int main()
	{
	int num,i,sum=0,temp;
	cout << "Enter a Number : \n";
	cin >> num;
	temp = num;
	for (i=1;i<num;i++)
		{
		if(num % i == 0)
			{
			sum = sum + i;
			}
		}
		if( sum == temp)
			cout << "Perfect Number";
		else
			cout << "Not a Perfect Number";
	}
