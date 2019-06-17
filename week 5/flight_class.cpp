#include<iostream>
#include<string>
#include <cctype>
#include <locale>
using namespace std;

string toUpperCase(string s){
	for(int i=0;i<s.length();i++){
		s[i] = toupper(s[i]);
	}
	return s;
}

class Flight{
	private:
		int flightNum;
		string source;
		string destination;
		int seats,n;
		
		string shortAndCapital(string s){
			if(s.length()<=3)
				return toUpperCase(s);
			else
				return toUpperCase(s.substr(0,3));
		}

	public:
		//constructors
		Flight(){};
		Flight(int f,string s,string d,int n){
			flightNum = f;
			source = shortAndCapital(s);
			destination = shortAndCapital(d);
			seats = n;
		}	
		Flight(int f,int n){
			flightNum = f;
			seats = n;
			source = "";
			destination = "";
		}
		Flight(int f){
			source = "";
			destination = "";
			flightNum = f;
			seats = 0;
		}
		//accessor methods
		int getFlightNum(){
			return flightNum;
		}
		string getSource(){
			return source;
		}
		string getDestination(){
			return destination;
		}
		int getSeatsAvailable(){
			return seats;
		}	
		//mutatormethods
		void setSource(string s){
			source = s;
		}
		void setDestination(string d){
			destination = d;
		}
	    void setSeatsAvailable(int n){
			seats = n;
		}
		//inputMethod
		void input(){
		 	cout << endl << "ENTER FLIGHT NUMBER: ";
		 	cin >> flightNum;
		 	cout << "ENTER SOURCE: ";
		 	cin >> source;
		 	cout << "ENTER DESTINATION: ";
		 	cin >> destination;
		}
		//reserveflight
		void reserve(int n){
			if(n <= seats){
				cout << "\nRESERVED SEATS: " << n << endl;
				seats = seats - n;
				cout << "\nSEATS AVAILABLE: " << seats;
			}
			else
				{
				cout << "\nSEATS NOT RESERVED" << endl;
				seats = seats + n;
				cout << "\nSEATS AVAILABLE: " << seats;
			}
		}
		
		//cancelflight
		void cancel(int n){
			seats = seats + n;
			cout << "\nSEATS AVAILABLE: " << seats;
		}
		
		//toString method
		void displayInfo(){
			cout << "FLIGHT NO: " << flightNum << endl;
			cout << "FROM: " << shortAndCapital(source) << endl;
			cout << "TO: " << shortAndCapital(destination) << endl;
		}
		
};

//equals method
		void equal(int a, int b){
			if(a==b)
				cout << "\nFLIGHTS ARE SAME" << endl;
			else
				cout << "\nFLIGHTS ARE NOT SAME" << endl;
		}

int main()
{
 	Flight f1,f2;
 	int f,seats,n;
 	string s,d;
 	cout << "ENTER DETAILS OF FLIGHT 1: " << endl;
 	f1 = Flight(f,s,d,300);
	f1.input();
	cout << "ENTER NUMBER OF SEATS YOU WANT: ";
	cin >> n;
 	
 	f1.reserve(n);
 	cout << "\n\nFLIGHT 1 INFO: " << endl << endl;
 	f1.displayInfo();
 	
 	cout << "\nENTER DETAILS OF FLIGHT 2: " << endl;
 	f2 = Flight(f,s,d,300);
	f2.input();
 	cout << "ENTER NUMBER OF SEATS YOU WANT: ";
	cin >> n;
 	f2.reserve(n);
 	cout << "\n\nFLIGHT 2 INFO: " << endl << endl;
 	
 	f2.displayInfo();
 	
 	equal( f1.getFlightNum(), f2.getFlightNum() );
}
