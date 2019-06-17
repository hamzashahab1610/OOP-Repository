#include<iostream>
using namespace std;

int main()
{
	struct book{
		private:
			int bookid;
			char title[20];
			int price;
		
		public:
			void input(){
				cout << "Enter bookid, title, price";
				cin >> bookid >> title >> price;
				if(bookid < 0)
					bookid=-bookid;
			}
			void display(){
				cout << "\nBOOKID: " << bookid << "\nTITLE: " << title << "\nPRICE: " << price;
			}
	};
	
	book b;
	b.bookid = -101;
	b.display();
return 0;
}
