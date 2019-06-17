#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class GradeRecord{
private:
	string stdID,name;
	int credits,courses;
	float gp;
public:
	//constructors
	GradeRecord(){
		stdID = "";
		credits = 0;
		gp = 0;
		courses = 0;
	}
	GradeRecord(string s, int c, float g, int co){
		stdID = s;
		credits = c;
		gp = g;
		courses = co;
	}
	//mutators
	void setData(){
		string s;
		int c;
		char g;
		cout << "ENTER STUDENT ID: ";
		cin >> stdID;
		cout << "ENTER NAME: ";
		cin >> name;
		cout << "ENTER NUMBER OF COURSES: ";
		cin >> courses;
		for(int i=1; i<=courses ; i++)
		{
			cout << "\nENTER CREDITS FOR COURSE " << i << " : ";
			cin >> c;
			credits = credits + c;
			
			cout << "ENTER GRADE: ";
			cin >> g;
			if(g == 'A')
				gp = gp + 4*c;
			else if(g == 'B')
				gp = gp + 3*c;
			else if(g == 'C')
				gp = gp + 2*c;
			else if(g == 'D')
				gp = gp + 1*c;
			else if(g == 'F')
				gp = gp + 0*c;
			else
				cout << "INVALID GRADE" << endl;
		}	
	}

	//accessors
	int getCredits(){
		return credits;
	}
	float getGradePoints(){
		return gp;
	}
	string getID(){
		return stdID;
	}
	float computeGPA(float gp, int credits){
		return (gp/credits);
	}
	//display
	void display(){
		cout << endl << "STUDENT: " << stdID << "\tUNITS: " << credits << "\tGRADE POINTS: " << gp << "\tGPA: " << computeGPA(gp,credits) << endl << endl; 
	}
};

int main(){
	GradeRecord r1;
	cout << "FIRST SEMESTER:" << endl << endl;
	r1.setData();
	r1.display();
	cout << "SECOND SEMESTER:" << endl << endl;
	r1.setData();
	r1.display();
	getch();
}
