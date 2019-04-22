#include<iostream>
using namespace std;
int main()
	{
	int r=0,d,num,temp;
	cout << "Enter Number :\n ";
	cin >> num;
	temp = num;
	while (num > 0)
		{
		d=num%10;
		r=r*10+d;
		num=num/10;
		}
	if(temp == r)
		cout << "Pallindrome\n";
	else
		cout << "Not Pallindrome\n";
	}
