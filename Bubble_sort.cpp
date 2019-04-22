#include<iostream>
using namespace std;
class Sort
	{
	public:
		void swap(int *a,int *b)
			{
			int temp;
			temp=*a;
			*a=*b;
			*b=temp;
			}
		void sort(int a[])
			{
			int i,j;
			for (i=0;i<4;i++)
				{
				for(j=0;j<5-i-1;j++)
					{
					if(a[j] > a[j+1])
						swap(&a[j],&a[j+1]);
					}
				}
			cout << "Sorted Array : \n";
			for (j=0;j<5;j++)
				{
				cout << a[j] << "\n";
				}
			}
	};
int main()
	{
	Sort s;
	int a[5],i;
	cout << "Enter Array : \n";
	for (i=0;i<5;i++)
		{
		cin >> a[i];
		}
	s.sort(a);
	}


