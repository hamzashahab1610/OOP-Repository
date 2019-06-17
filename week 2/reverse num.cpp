#include<iostream>
using namespace std;

int main()
{
	int num,a,b;
	cout<<"Enter a 2 digit number: ";
	cin>>num;
	a=num%10;
	num=num/10;
	b=num%10;
	cout<<a<<b;
}
