#include<iostream>

using namespace std;

struct Address{
	int houseNo;
	char city[10];
	int pinCode;
};

struct Employee{
	int empid;
	char name[20];
	int salary;
	struct Address a;
};

int main()
{
	Employee e1;
	cout << "Enter employee id, name, salary and address (House #, City, Pin): \n";
	cin >> e1.empid >> e1.name >> e1.salary >> e1.a.houseNo >> e1.a.city >> e1.a.pinCode;
	if(e1.salary)
	{
		e1.salary=e1.salary+(e1.salary*20/100);
	}
	cout << "\n***************************************\n";
	cout << "\nEMPLOYEE ID: " << e1.empid << "\nNAME: " << e1.name << "\nSALARY: " << e1.salary << "\nADDRESS: " << " " << e1.a.houseNo << " " << e1.a.city << " " << e1.a.pinCode;
}
