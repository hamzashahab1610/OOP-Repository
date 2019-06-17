#include<iostream>
using namespace std;

int *sum(int *p1, int *p2)
{
	int i,*p3;
	static int arr3[5];
	for(i=0;i<5;i++)
	{
		arr3[i]=*(p1+i)+*(p2+i);
	}
	p3=arr3;
	return p3;
}

int main()
{
	int arr1[5]={1,2,3,4,5},arr2[5]={5,4,3,3,1},i;
	
	cout << "ARRAY 1:\t";
	for(i=0;i<5;i++){
		cout << arr1[i] << "\t";
	}
	
	cout << "\n\nARRAY 2:\t";
	for(i=0;i<5;i++){
		cout << arr2[i] << "\t";
	}
	
	int *p1=arr1,*p2=arr2,*p3;
	p3=sum(p1,p2);
	cout << "\n\nSUM:\t\t"; 
	for(i=0;i<5;i++)
	{
		cout << *(p3+i) << "\t";
	}
}
