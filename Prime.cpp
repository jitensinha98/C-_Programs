#include<iostream>
using namespace std;
class Prime
	{
	public:
	void print_prime(int a,int b)
		{
		int i,j;
		int flag;
		for (i=a;i<=b;i++)
			{
			flag = 0;
			for (j=2;j<=i/2;j++)
				{
				if(i % j == 0)
					{
					flag = 1;
					break;
					}
				}
			if (flag == 0)
				cout<<i<<"\n";
			}
					
		}
	};
int main()
	{
	Prime p;
	int x,y;
	cout << "Enter the range : \n";
	cin >>x>>y;
	p.print_prime(x,y);
	return 0;
	}
			

