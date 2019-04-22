#include<iostream>
#include<math.h>
using namespace std;
class A
	{
	public:
		int a,b,c;
		void getData()
			{
			cout << "Enter sides of the triangle : \n";
			cin >> a;
			cin >> b;
			cin >> c;
			}
	};
class B : public A
	{
	public:
		int s;
		void find_s()
			{
			s=0.5*(a+b+c);
			}
	};
class C : public B
	{
	public:
		int area;
		void Area()
			{
			area = pow((s*(s-a)*(s-b)*(s-c)),0.5);
			cout << "Area is "<<area<<"\n";
			}
	};
int main()
	{
	C obj;
	obj.getData();
	obj.find_s();
	obj.Area();
	}

			
