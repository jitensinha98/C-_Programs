#include<iostream>
using namespace std;
class A
	{
	private:
		int num1,num2;
	public:
		void getNumbers()
			{
			cout << "Enter two numbers : \n";
			cin >> num1;
			cin >> num2;
			}
		friend void Swap(A n);
	};
void Swap(A n)
	{
	int temp;
	temp = n.num1;
	n.num1 = n.num2;
	n.num2 = temp;
	cout << "The numbers swapped are "<<n.num1<<" and "<<n.num2;
	}
int main()
	{
	A obj;
	obj.getNumbers();
	Swap(obj);
	return 0;
	}

		
