#include<iostream>
using namespace std;
class Unique
	{
	public:
		void uniq(int a[])
			{
			int i,b[5],j,flag = 0;
			cout << "Unique Elements in the Array : \n";
			for(i=0;i<5;i++)
				{
				for (j=0;j<i;j++)
					{
					if (a[i] == a[j])
						break;
					}
				if(i == j)
					cout << a[i] <<"\n";
				}
			}
	};
int main()
	{
	int a[5],i;
	Unique u;
	cout << "Enter elements : \n";
	for (i=0;i<5;i++)
		{
		cin >> a[i];
		}
	u.uniq(a);
	}

		
		
					
