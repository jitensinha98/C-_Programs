#include<iostream>
using namespace std;
class Search
	{
	public:
		void linear_search(int a[],int key)
		{
		int i,flag=0,pos;
		for (i=0;i<10;i++)
			{
			if(a[i] == key)
				{
				pos=i;
				break;
				}
			else
				{
				flag = 1;
				}
			}
		if(flag == 1)
			cout << "Key Found at index " << pos << "\n";
		else
			cout << "Key not found \n";		
		}
		void binary_search(int a[],int key)
			{
			int high,low,mid,pos,flag = 0;
			high = 9;
			low = 0;
			flag = 0;
			while( high > low )
				{
				mid = (high+low)/2;
				if (key == a[mid])
					{
					flag = 1;
					pos = mid;
					}
				else if ( key > a[mid] )
					{
					low = mid+1;
					}
				else
					high = mid - 1;
				}
			if (flag == 1)
				cout << "Element found at "<<pos<<"\n";
			else
				cout << "Element not found. \n";
			}
	};
int main()
	{
	int a[10],key,ch,i;
	Search s;
	cout << "enter array : \n";
	for (i=0;i<10;i++)
		{
		cin >> a[i];
		}
	cout << "Enter key : \n";
	cin >> key;
	cout << "1. Linear Serach\n";
	cout << "2. Binary Search\n";
	cout << "Enter Choice : \n";
	cin >> ch;
	switch(ch)
		{
		case 1: s.linear_search(a,key);
			break;
		case 2: s.linear_search(a,key);
			break;
		default: cout << "INVALID INPUT";
		}
	}

