#include<iostream>
using namespace std;
class Check
	{
	public :
		void check(int a[])
			{
			int i,count_odd=0,count_even=0;
			for (i=0;i<5;i++)
				{
				if(a[i]%2==0)
					count_even++;
				else
					count_odd++;
				}
			cout << "Even Numbers : "<<count_even<<"\n";
			cout << "Odd Numbers : "<<count_odd<<"\n";
			}
	};
int main()
	{
	int a[5],i;
	Check c;
	for (i=0;i<5;i++)
		{
		cout << "Enter elements : \n";
		cin >> a[i];
		}
	c.check(a);
	}

	
			
