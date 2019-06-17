#include<iostream>
using namespace std;

class CoffeeOrder{
	private:
		int bag;
		int largebox;
		int mediumbox;
		int smallbox;
	
	public:
		CoffeeOrder(){};
		CoffeeOrder(int b){
			bag = b;
		}
		void order(){
			cout << "ENTER NUMBER OF BAGS: ";
			cin >> bag;
		}
		double orderCost(){
			return 5.50*bag;
		}
		void boxes(){
			largebox = bag/20;
			mediumbox = (bag%20)/10;
			if((bag%20)%20==0)
				smallbox = 0;
			else if((bag%20)%10>0 && (bag%20)%10<=5)
				smallbox=1;
			else
				smallbox=2;
		}
		double largeBoxCost(){
			return largebox*1.80;
		}
		double mediumBoxCost(){
			return mediumbox*1.00;
		}
		double smallBoxCost(){
			return smallbox*0.60;
		}
		double total(){
			return orderCost()+largeBoxCost()+mediumBoxCost()+smallBoxCost();
		}
		void displayCost() {
			cout << "Cost of Order is: $" << orderCost() << endl;
			cout << endl << "Boxes Used: " << endl;
			cout << "\t" << largebox << " Large - $" << largeBoxCost() << endl;
			cout << "\t" << mediumbox << " Medium - $" << mediumBoxCost() << endl;
			cout << "\t" << smallbox << " Small - $" << smallBoxCost() << endl;
			cout << endl << "Your total cost is: $" << total() << endl;
		}
};

int main()
{
	CoffeeOrder c;
	c.order();
	c.boxes();
	c.displayCost();
}
