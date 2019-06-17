#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class MealBill{
private:
	string rname;
	float mealCost;
	float tax;
	float tip;
	float pay;
	float rate;
	float total;
public:
	//constructors
	MealBill(){
		mealCost = 0;
		tax = 0;
		tip = 0;
	}
	MealBill(float mc, float ta, float ti){
		mealCost = mc;
		tax = ta;
		tip = ti;
	}
	MealBill(string n){
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
	float getTotal(){
		return total;
	}
	float getRate(){
		return rate;
	}
	//mutators
	void setMealCost(float mc){
		mealCost = mc;
	}
	void setRate(float r){
		rate = r;
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
		setTax(getRate()*mealCost);
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

class StdAccount : public MealBill{
private:
	string id;
	string name;
	float balance;
public:
	StdAccount(string n, string i, float b){
		balance = b;
		id = i;
		name = n;
	}
	void displayStatus(){
		cout << "\n\nCURRENT STATUS OF " << name << "'s ACCOUNT" << endl;
		cout << "\nID:\t\t" << id << endl;
		cout << "NAME:\t\t" << name << endl;
		cout << "BALANCE:\t" << balance - getTotal() << endl;
	}
};

int main(){
	StdAccount std("AHMED ALI","0210-BCS-06",2000);
	std.setName("UNIVERSITY SUMMIT RESTAURANT");
	std.setRate(0.006);
	std.inputBill();
	std.outputBill();
	std.inputReceipt();
	std.outputReceipt();
	std.displayStatus();
}
