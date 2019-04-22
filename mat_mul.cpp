#include<iostream>
using namespace std;
class Multiply
	{
	public:
		void mul()
		{
		int a[10][10],b[10][10],i,j,m,n,p,q;
		int c[10][10],k,sum=0;
		cout <<" Enter number of rows of matrix A :\n";
		cin >> m ;
		cout <<" Enter number of columns of matrix A :\n";
		cin >> n ;
		cout <<" Enter number of rows of matrix B :\n";
		cin >> p ;
		cout <<" Enter number of columns of matrix B :\n";
		cin >> q ;
		cout << "Enter Matrix A : \n";
		for (i=0;i<m;i++)
			{
			for(j=0;j<n;j++)
				{
				cin >> a[i][j];
				}
			}
		cout << "Enter Matrix B : \n";
		for (i=0;i<p;i++)
			{
			for(j=0;j<q;j++)
				{
				cin >> b[i][j];
				}
			}
		if(n == p)
			{
			for (i=0;i<m;i++)
				{
				for (j=0;j<q;j++)
					{
					for (k=0;k<p;k++)
						{
						sum = sum + a[i][k]*b[k][j];
						}
					c[i][j] = sum;
					sum = 0;
					}
				}
			cout << " Matrices After Multiplication \n ";
			for (i=0;i<m;i++)
				{
				for (j=0;j<q;j++)
					{
					cout << c[i][j] << " ";
					}
				cout << "\n";
				}
			}
			else
				cout << "Cannot Multiply Matrices. \n";
			}
	};
int main()
	{
	Multiply m;
	m.mul();
	}
		
