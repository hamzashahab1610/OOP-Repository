#include<iostream>
using namespace std;


int main()
{
	int r;
	double a;
	const int *ptr;
	const double pi=3.14;
	cout << "ENTER RADIUS OF CIRCLE: ";
	cin >> r;
	ptr=&r;
	a=pi**ptr**ptr;
	cout << "\nAREA: " << a;
}
