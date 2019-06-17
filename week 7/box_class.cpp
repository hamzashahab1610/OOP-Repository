#include <iostream>
using namespace std;

class Box
{
private:
	float width,height,length;
public:
	Box() {};
	Box(float l, float w, float h) : length(l), width(w), height(h) {};
	Box operator+(const Box &);
	Box operator-(const Box &);
	Box operator*(const Box &);
	Box operator/(const Box &);
	void setData()
	{
		cout << "ENTER LENGTH WIDTH & HEIGHT: ";
		cin >> length >> width >> height;
	}
	float getVolume()
	{
		return length*width*height;
	}
	void showData()
	{
		cout << "\nLENGTH:\t" << length << "\nWIDTH:\t" << width << "\nHEIGHT:\t" << height << "\n\nVOLUME:\t" << getVolume() << endl << endl ;
	}
};

Box Box :: operator+(const Box &b)
{
	Box t;
	t.length = length + b.length;
	t.width = width + b.width;
	t.height = height + b.height;
	return t;
}

Box Box :: operator-(const Box &b)
{
	Box t;
	t.length = length - b.length;
	t.width = width - b.width;
	t.height = height - b.height;
	return t;
}

Box Box :: operator*(const Box &b)
{
	Box t;
	t.length = length * b.length;
	t.width = width * b.width;
	t.height = height * b.height;
	return t;
}

Box Box :: operator/(const Box &b)
{
	Box t;
	t.length = length / b.length;
	t.width = width / b.width;
	t.height = height / b.height;
	return t;
}

int main()
{
	/* code */
	Box b1(5,6.2,7.4), b2(5,2.2,7.4), b3, b4 , b5, b6;
	b3 = b1 + b2;
	b4 = b1 - b2;
	b5 = b1 * b2;
	b6 = b1 / b2;
	cout << "ADD:";
	b3.showData();
	cout << "SUBTRACT:";
	b4.showData();
	cout << "MULTIPLY:";
	b5.showData();
	cout << "DIVIDE:";
	b6.showData();
	return 0;
}
