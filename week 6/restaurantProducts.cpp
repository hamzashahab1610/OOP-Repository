#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class MealBill{
private:
	string rname;
	float rate;
	float mealCost;
	float tax;
	float tip;
	float pay;
	float total;
public:
	//constructors
	MealBill(){
		rname = "";
		rate = 0;
		mealCost = 0;
		tax = 0;
		tip = 0;
	}
	MealBill(string n, float r){
		rate = r;
		rname = n;
	}
	
	//accessors
	float getMealCost(){
		return mealCost;
	}
	float getTip(){
		return tip;
	}
	float getTax(){
		return tax;
	}
	//mutators
	void setMealCost(float mc){
		mealCost = mc;
	}
	void setTax(float ta){
		tax = ta;
	}
	void setTip(float ti){
		tip = ti;
	}
	void setPay(float pa){
		pay = pa;
	}
	void setName(string n){
		rname = n;
	}

	void inputBill(){
		cout << "ENTER MEAL COST: ";
		cin >> mealCost;
		tip = mealCost * 0.15;
		setTax(rate*mealCost);
		total = mealCost+tax+tip;
	}

	void outputBill(){
		cout << "\nBILL:" << endl;
		cout << "\tMEAL COST:\t" << mealCost << endl;
		cout << "\tTAX:\t\t" << tax << endl;
		cout << "\tTIP:\t\t" << tip << endl;
		cout << "\tTOTAL COST:\t" << total;
	}

	void inputReceipt(){
		cout << "\n\nENTER THE AMOUNT PAID: ";
		cin >> pay;
	}

	void outputReceipt(){
		cout << "\nRECEIPT:" << endl;
		cout << "\tTOTAL COST:\t" << mealCost+tax+tip << endl;
		cout << "\tPAYMENT:\t" << pay << endl;
		cout << "\tCHANGE:\t\t" << pay - total << endl;
		cout << "\n\tTHANK YOU FOR DINING AT " << rname;
	}
};

int main(){
	MealBill m("Kaybees",60/100);
	m.inputBill();
	m.outputBill();
	m.inputReceipt();
	m.outputReceipt();
	getch();
}
