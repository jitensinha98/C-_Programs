#include<iostream>
using namespace std;
class Triangle
	{
	public:
		int s1,s2,s3,peri;
		void find_peri()
			{
			s1=58;
			s2=70;
			s3=48;
			peri = s1 + s2 + s3;
			}
	};
class Circle : public Triangle
	{
	public:
		float rad;
		void find_radius()
			{
			rad = peri/(2*3.14);
			}
	};
class Area : public Circle
	{
	public:
		float area;
		void find_area()
			{
			area = 3.14*rad*rad;
			cout << "The area is "<<area<<"\n";
			}
	};
int main()
	{
	Area ob;
	ob.find_peri();
	ob.find_radius();
	ob.find_area();
	}

			
			
