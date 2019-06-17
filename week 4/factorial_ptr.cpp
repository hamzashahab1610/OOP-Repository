#include<iostream>
using namespace std;

int fact(int *p)
{
	int b=*p,a=*p;
	if(*p==0)
		return 1;
	else
	{
		a--;
		b=b*fact(&a);
		return b;
	}
}

int main()
{
	int b,num,*p;
	cout << "ENTER A NUMBER: ";
	cin >> num;
	p=&num;
	b=fact(p);
	cout << "\nFACTORIAL OF " << num << " IS: " <<b;
	
}
