#include<iostream>
using namespace std;

int main()
{
	int rup,th,fivhun,hun,fifty,ten,fiv,two,one;
	
	cout<<"Enter the amount in rupees: ";
	cin>>rup;
	
	th=rup/1000;
	fivhun=(rup%1000)/500;
	hun=((rup%1000)%500)/100;
	fifty=(((rup%1000)%500)%100)/50;
	ten=((((rup%1000)%500)%100)%50)/10;
	fiv=(((((rup%1000)%500)%100)%50)%10)/5;
	two=((((((rup%1000)%500)%100)%50)%10)%5)/2;
	one=(((((((rup%1000)%500)%100)%50)%10)%5)%2);
	
	cout<<"\n1000's in given amount: "<<th;
	cout<<"\n500's in given amount: "<<fivhun;
	cout<<"\n100's in given amount: "<<hun;
	cout<<"\n50's in given amount: "<<fifty;
	cout<<"\n10's in given amount: "<<ten;
	cout<<"\n5's in given amount: "<<fiv;
	cout<<"\n2's in given amount: "<<two;
	cout<<"\n1's in given amount: "<<one;
}
