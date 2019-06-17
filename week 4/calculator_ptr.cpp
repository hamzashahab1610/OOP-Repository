#include<iostream>
using namespace std;

int main()
{
	int a,b,*p1,*p2;
	float result;
	char op;
	cout << "ENTER OPERANDS: ";
	cin >> a >> b;
	cout << "\nENTER OPERATOR: ";
	cin >> op;
	p1=&a;
	p2=&b;
	switch(op){
		case '+':
			result=*p1+*p2;
			break;
		case '-':
			result=*p1-*p2;
			break;
		case '*':
			result=*p1**p2;
			break;
		case '/':
			result=(float)*p1/ *p2;
			break;
		case '%':
			result=(int)*p1%(int)*p2;
			break;
		default:
			cout << "INVALID OPERATOR";
	}
	cout << "\nRESULT: " << result;
}
