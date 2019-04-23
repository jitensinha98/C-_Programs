#include<iostream>
using namespace std;
class Merge
	{
	public:
	void merge(int a[],int b[],int m,int n)
		{
		int c[100],i,j,k,size;
		size = m + n;
		for (i=0;i<m;i++)
			c[i]=a[i];
		for (j=m,k=0;j<size,k<n;j++,k++)
			c[j] = b[k];
		cout << "Displaying the merged array :\n";
		for (i=0;i<size;i++)
			cout << c[i] <<" ";
		}
		cout << "\n";
	};
int main()
	{
	Merge me;
	int a[100],b[100],m,n,i,j;
	cout << "Enter size of array A :\n";
	cin >> m;
	cout << "Enter size of array B :\n";
	cin >> n;
	cout << "Enter Array A :\n";
	for(i=0;i<m;i++)
		cin >> a[i];	
	cout << "Enter Array B :\n";		
	for(j=0;j<n;j++)
		cin >> b[j];
	me.merge(a,b,m,n);
	}

				
