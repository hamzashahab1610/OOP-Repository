#include<iostream>
#include<string>
using namespace std;

class car{
		string brandName;
		double priceNew;
		string color;
		double odometer;
	
	public:
		car() {};
		car(string b, double p, string c, double m){
			brandName=b;
			priceNew=p;
			color=c;
			odometer=m;
		}
		double getPriceAfterUse(){
			return priceNew*(1-odometer/600000);
		}
		double updateMilage(){
			double m;
			cout << endl << "\nENTER DISTANCE FURTHER TRAVELLED: ";
			cin >> m;
			odometer = odometer + m;
		}
		void inputDetails(){
			cout << "ENTER BRAND: ";
			cin >> brandName;
			cout << "ENTER COLOR: ";
			cin >> color;
			cout << "ENTER NEW PRICE: ";
			cin >> priceNew;
			cout << "ENTER ODOMETER: ";
			cin >> odometer;
		}
		void outputDetails(){
			cout << "\n1.BRAND NAME: " << brandName;
			cout << "\n2.NEW PRICE " << priceNew;
			cout << "\n3.PRICE AFTER USE: " << getPriceAfterUse();
			cout << "\n4.COLOR: " << color;
			cout << "\n5.ODOMETER: " << odometer;
		}
};
		
int main()
{
	car c1;
	cout << "ENTER DETAILS: "<<endl<<endl;
	c1.inputDetails();
	cout << endl << "DETAILS: "<<endl;
	c1.outputDetails();
	c1.updateMilage();
	cout << endl << "DETAILS AFTER MILAGE UPDATE: "<<endl<<endl;
	c1.outputDetails();
}

