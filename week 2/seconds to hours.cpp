#include<iostream>
using namespace std;

int main()
{
	int s,min,hr;
	cout<<"Enter time in seconds: ";
	cin>>s;
	hr=s/3600;
	min=(s%3600)/60;
	s=((s%3600)%60)%60;
	cout<<"\nHours in time: "<<hr;
	cout<<"\nMinutes in time: "<<min;
	cout<<"\nSeconds in time: "<<s;
}
