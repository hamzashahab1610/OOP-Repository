#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char T[] = {"My name is Hamza"};
	char P[] = {"am"};
	int r = strlen(P); 
	int s = strlen(T);
	int k, flag = 0, l=0, index=0;

	for(k=0; k<(s-r+1); k++)
	{
		l=0;
		while(l<r)
		{
			if(P[l] == T[k+l])
			{
				flag = 1;
				index = k+l;
				l++;
			}
			
			else
			{
				l++;
				break;
			}
		}
		if(flag == 1)
			break;
	}
	
	if(flag==0)
		cout<<"The pattern is not matched";
	else
		cout<<"The pattern is matched at index: " << index;
}
