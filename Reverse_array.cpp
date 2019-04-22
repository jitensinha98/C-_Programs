#include<iostream>
using namespace std;
class Reverse
	{
	public:
		void reverse(int a[])
			{
			int i;
			cout << "Array Before Reversing : \n";
			for (i=0;i<5;i++)
				{
				cout << a[i] << "\n";
				}
			cout << "Array after Reversing : \n";
			for (i=4;i>=0;i--)
				{
				cout << a[i] << "\n";
				}
			}
	};
int main()
	{
	int a[5],i;
	Reverse r;
	cout << "Enter Array : \n";
	for ( i=0;i<5;i++)
		{
		cin >> a[i];
		}
	r.reverse(a);
	}
			
