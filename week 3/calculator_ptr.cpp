#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,*p1,*p2;
	char op,*p3;
	cout << "Enter the operands a & b: ";
	cin >> a >> b;
	p1=&a;
	p2=&b;
	cout << "\nEnter the operator: ";
	cin >> op;
	p3=&op;
	
	switch(*p3){
		case '+':
			cout << "\nADDITION: " << *p1+*p2;
			break;
		case '-':
			cout << "\nSUBTRACTION: " << *p1-*p2;
			break;
		case '*':
			cout << "\nMULTIPLICATION: " << *p1**p2;
			break;
		case '/':
			cout << "\nDIVISION: " << *p1 / *p2;
			break;
		case '%':
			cout << "\nMODULUS: " << int(*p1)%int(*p2);
			break;
		default:
			cout << "\nINVALID OPERATOR";
	}
}
