#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x1,y1,x2,y2;
	char b1,b2,c;
	float d=0;
	cout << "Enter first point: ";
	cin >> b1 >> x1 >> c >> y1 >> b2;  
	cout << "Enter second point: ";
	cin >> b1 >> x2 >> c >> y2 >> b2; 
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout << "LENGTH: " << d;
}
