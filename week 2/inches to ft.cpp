#include<iostream>
using namespace std;

int main()
{
	int in,ft;
	cout<<"Enter person's height in inches: ";
	cin>>in;
	ft=in/12;
	in=in%12;
	cout<<"This is equivalent to: "<<ft<<"\'"<<in<<"\"";
}
