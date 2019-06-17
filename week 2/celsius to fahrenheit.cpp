#include<iostream>
using namespace std;

int main()
{
	float C,F;
	cout<<"Enter temperature in celsius: ";
	cin>>C;
	F=9*C/5+32;
	cout<<"\nFahrenheit temperature: "<<F;
	
	cout<<"\n\nEnter temperature in fahrenheit: ";
	cin>>F;
	C=5*(F-32)/9;
	cout<<"\nCelsius temperature: "<<C;
}
