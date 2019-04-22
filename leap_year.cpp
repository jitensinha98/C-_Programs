#include<iostream>
using namespace std;
int main()
	{
	int yr;
	cout << "Enter a Year : \n";
	cin >> yr;
	if ( yr % 4 == 0)
		{
		if(yr % 100 == 0)
			{
			if (yr % 400 == 0)
				cout << "Leap Year \n";
			else
				cout << "Not a Leap Year \n";
			}
			else
				cout << "Leap Year\n";
		}
		else
			cout << "Not a Leap Year \n";
	}

