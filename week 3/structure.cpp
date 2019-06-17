#include<iostream>

using namespace std;

struct Student{
	char firstName[20];
	char lastName[20];	
	float scores;
};

void display(Student s)
{
	cout << "\nFIRST NAME: " << s.firstName;
	cout << "\nLAST NAME: " << s.lastName;
	cout << "\nSCORE: " << s.scores;
}

int main()
{
	Student s1;
	cout << "Enter first name, last name and score of student:\n";
	cin >> s1.firstName >> s1.lastName >> s1.scores;
	display(s1);
}
