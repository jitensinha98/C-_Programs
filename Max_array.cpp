#include<iostream>
using namespace std;
class Max
	{
	public:
	int find_max(int a[],int num)
		{
		static int i=0,max = -999;
		if ( i < num )
			{
			if (a[i] > max)
				{
				max=a[i];
				cout << max << "\n";
				}
			i=i+1;
			find_max(a,num);
			}
		return max;
		}
	};
int main()
	{
	int a[100],i,num,max;
	cout << "Enter limit of array : \n";
	cin >> num;
	cout << "Enter Array Elements : \n";
	for (i=0;i<num;i++)
		{
		cin >> a[i];
		}
	Max m;
	max = m.find_max(a,num);
	cout<<"The maximum number is " << max <<"\n";
	}
 	
