#include <iostream>
#include <string>
using namespace std;

int main()
{
	char arr[10][10]={"Hamza","Zaid","Ibrahim","Khurram"};
	int j,n,k,i;
	cout << "ENTER NUMBER OF ELEMENTS: ";
	cin >> n;
	cout << "\nENTER POSITION TO DELETE: ";
	cin >> k;
	k--;
	
	j=k;
	while(j<n){
		for(i=0;i<10;i++){
			arr[j][i]=arr[j+1][i];
		}
		j++;
	}
	n--;
	for(i=0;i<n;i++){
		for(j=0;j<10;j++){
			cout << arr[i][j];
		}
		cout << "\t";
	}
}
