#include<iostream>
using namespace std;
class Count
	{
	public:
		int count(int a[])
			{
			int i,j,count;
			for (i=0;i<5;i++)
				{
				for(j=0;j<i;j++)	
					{
					if(a[i] == a[j])
						break;
					}
				if(i != j)
					count++;
				}
			return count;
			}
	};
int main()
	{
	int a[5],count,i;
	Count c;
	cout << "Enter Array : \n";
	for (i=0;i<5;i++)
		{
		cin >> a[i];
		}
	count=c.count(a);
	cout << "Duplicate Elements = " << count << "\n";
	}

			
