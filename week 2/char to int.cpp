#include<iostream>
using namespace std;

int main()
{
	char chTen,chUnit;
	cout<<"Enter a two digit number: ";
	cin>>chTen;
	cin>>chUnit;
	int valueTen=chTen-'0';
	int valueUnit=chUnit-'0';
	int num=valueTen*10+valueUnit;
	cout<<"Numeric Value is: "<<num; 
}
