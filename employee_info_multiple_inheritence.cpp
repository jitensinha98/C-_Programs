#include<iostream>
using namespace std;
class Personal
	{
	protected:
		char name[30] ;
		char addr[50];
	public:
		void get_personal_Data()
			{
			cout << "Enter Name :\n";
			cin.getline(name,30);
			cout << "Enter Address :\n";
			cin.getline(addr,50);
			} 
	};
class Official
	{
	protected:
		char desg[10];
		int sal;
	public:
		void get_official_Data()
			{
			cout << "Designation : \n";
			cin.getline(desg,10);
			cout << "Salary :\n";
			cin >> sal;
			}
	};
class info : private Personal,private Official
	{
	public:
		void print_conclusion()
			{
			get_personal_Data();
			get_official_Data();
			cout << "Name : " << name <<"\n";
			cout << "Address : " << addr <<"\n";
			cout << "Designation : " << desg << "\n";
			cout << "Salary : " << sal << "\n";
			}
	};
int main()
	{
	info obj;
	obj.print_conclusion();
	}


