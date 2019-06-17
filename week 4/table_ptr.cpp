#include<iostream>
using namespace std;

int table(int *ptr){
	int i;
	cout << "\n\t\tTABLE OF " << *ptr << endl;
	for(i=1;i<=10;i++){
		cout << "\t\t" << *ptr << " X " << i << " = " << *ptr*i << endl;
	}
}

int main()
{
	int num,*ptr;
	cout << "ENTER A NUMBER: ";
	cin >> num;
	ptr=&num;
	table(ptr);
}
