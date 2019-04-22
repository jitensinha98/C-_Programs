#include<iostream>
using namespace std;
class Sort
	{
	public:
		void insertion_sort(int a[],int n)
			{
			int i,key,j;
			for(i=0;i<n;i++)
				{
				key = a[i];
				j = i - 1;
				while (j >= 0 && a[j] > key)
					{
					a[j+1] = a[j];
					j = j - 1;
					}
				a[j+1] = key;
				}
			cout << "Sorted Array is : \n";
			for (i=0;i<n;i++)
				{
				cout << a[i] << " ";
				}
			}
	};
int main()
	{
	int a[100],i,n;
	cout << "Enter the limit of array : \n";
	cin >> n;
	cout << "Enter Array :\n";
	for (i=0;i<n;i++)
		{
		cin >> a[i];
		}
	Sort s;
	s.insertion_sort(a,n);
	}

