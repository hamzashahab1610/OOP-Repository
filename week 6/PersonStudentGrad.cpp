#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
	string name;
	int age;
	string gender;
public:
	person(){}
	person(string n,int a,string g) : name(n),age(a),gender(g)
	{}
	//accessors
	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	string getGender(){
		return gender;
	}
	//mutator
	virtual void setData(){
		string n,g;
		int a;
		cout << "ENTER NAME, AGE AND GENDER: " << endl;
		getline(cin,n);
		cin >>a;
		getchar();
		getline(cin,g);
		name = n;
		age = a;
		gender = g;
	}
	void showData(){
		cout << endl << "NAME:\t\t" << getName() << endl;
		cout << "AGE:\t\t" << getAge() << endl;
		cout << "GENDER:\t\t" << getGender() << endl;
	}
};

class student : public person
{
protected:
	int rollNo, studyYear;
	float gpa;
public:
	student(){};
	student(int r, int y, float g) : rollNo(r),studyYear(y),gpa(g)
	{};
	//mutator
	void setData(){
		person :: setData();
		int r,y;
		float g;
		cout << endl << "ENTER ROLL NO, STUDY YEAR AND GPA:" << endl;
		cin >> r >> y >> g;
		rollNo = r;
		studyYear = y;
		gpa = g;
	}
	//accessors
	int getRollNo(){
		return rollNo;
	}
	int getStudyYear(){
		return studyYear;
	}
	float getGPA(){
		return gpa;
	}

	void showData(){
		person :: showData();
		cout << "ROLL NO.:\t" << getRollNo() << endl;
		cout << "STUDY YEAR:\t" << getStudyYear() << endl;
		cout << "GPA:\t\t" << getGPA() << endl;
	}
};

class graduate : public student
{
private:
	string degree,institute;
	int yearsOfStudy;

public:
	graduate(){};
	graduate(string d,string i,int y) : degree(d),institute(i),yearsOfStudy(y)
	{}
	//accessors
	string getInstitute(){
		return institute;
	}
	string getDegree(){
		return degree;
	}
	int getYears(){
		return yearsOfStudy;
	}
	//mutator
	void setData(){
		student :: setData();
		string i,d;
		int y;
		cout << "\nENTER NAME OF INSTITUTE, DEGREE AND YEARS STUDIED:" << endl;
		getchar();
		getline(cin,i);
		getline(cin,d);
		cin >> y;
		institute = i;
		degree = d;
		yearsOfStudy = y;
	}

	void showData(){
		student :: showData();
		cout << "INSTITUTE:\t" << getInstitute() << endl;
		cout << "DEGREE:\t\t" << getDegree() << endl;
		cout << "YEARS STUDIED:\t" << getYears() << endl;
	}
};

int main()
{
	/* code */
	graduate s1;
	s1.setData();
	s1.showData();
	return 0;
}
