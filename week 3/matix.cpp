#include<iostream>
using namespace std;

int main()
{	
	int i,j,m,n,p,q,k,x;
	int mat1[10][10],mat2[10][10],sum[10][10],product[10][10];
	
	cout << "ENTER NO. OF ROWS AND COLUMNS OF FIRST MATRIX:\n";
	cin >> m >> n;
	
	cout << "ENTER NO. OF ROWS AND COLUMNS OF SECOND MATRIX:\n";
	cin >> p >> q;
	
	cout << "ENTER ELEMENTS OF FIRST MATRIX:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> mat1[i][j];
		}
	}
	
	cout << "ENTER ELEMENTS OF SECOND MATRIX:\n";
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			cin >> mat2[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	cout << "\nSUM OF MATRICES:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << sum[i][j] << "\t";
		}
		cout << "\n";
	}
	
	for(i=0;i<m;i++)
	{	
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				x=x+(mat1[i][k]*mat2[k][j]);
			}
			product[i][j]=x;
			x=0;
		}
	}
	
	cout << "\nMULTIPLICATION OF MATRICES:\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			cout << product[i][j] << "\t";
		}
		cout << "\n";
	}
		return 0;
}
