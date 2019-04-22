#include<iostream>
using namespace std;
class A
	{
	public:
		int a[100],n;
		void input_array_first()
			{
			int i;
			cout << "Enter the limit of array : \n";
			cin >> n;
			cout << "Enter elements of First Array : \n"; 
			for (i=0;i<n;i++)
				{
				cin >> a[i];
				}
			}
	};
class B 
	{
	public:
		int b[100],m;
		void input_array_second()
			{
			int i;
			cout << "Enter the limit of array : \n";
			cin >> m;
			cout << "Enter elements of First Array : \n"; 
			for (i=0;i<m;i++)
				{
				cin >> b[i];
				}
			}
	};
class C : public B,public A
	{
	public:
		void merge()
			{
			int c[100],p,i,j,k;
			p = m + n;
			for (i=0;i<n;i++)
				{
				c[i] = a[i];
				}
			for (i=0,j=n;j<p && i < m;i++,j++)
				{
				c[j] = b[i];
				}
			cout << "Displaying merged array : \n";
			for (k=0;k<p;k++)
				{
				cout << c[k] << " ";
				}
			}
	};
int main()
	{
	C obj;
	obj.input_array_first();
	obj.input_array_second();
	obj.merge();
	}

		
			
		
			
