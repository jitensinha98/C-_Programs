#include<iostream>
using namespace std;
class Data
	{
	private:
		int side,radius;
	public:
		void getData()
			{
			cout << "Enter side length of square : \n";
			cin >> side;
			cout << "Enter radius of circle : \n";
			cin >> radius;
			}
	friend class Area;
	};
class Area
	{
	public:
		void find_area(Data d)
			{
			float area1,area2;
			area1=d.side*d.side;
			area2=d.radius*d.radius*2*3.14;
			cout << "The area of Square is "<<area1<<"\n";
			cout << "The area of Circle is "<<area2<<"\n";
			}
	};
int main()
	{
	Area obj;
	Data d;
	d.getData();
	obj.find_area(d);
	}

