#include<iostream>
using namespace std;

int main()
{
	class complex{
		private:
			int a,b;
		public:
			void set_data(int x, int y)
			{
				a=x;
				b=y;
			}
			void show_data()
			{
				cout<<"a = "<<a<<"\nb = "<<b;
			}
			complex sum(complex c)
			{
				complex temp;
				temp.a=a+c.a;
				temp.b=b+c.b;
				return (temp);
			}
	};
	complex c1,c2,sum;
	c1.set_data(5,4);
	c2.set_data(5,4);
	sum=c1.sum(c2);
	sum.show_data();
	return 0;
}
