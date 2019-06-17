#include<iostream>
using namespace std;

class Rectangle
{
protected:
	float length,width,area,perimeter;
public:
	//constructors
	Rectangle(){
		length = 0;
		width = 0;
		area = 0;
		perimeter = 0;
	};
	Rectangle(float l,float w,float a,float p){
		length = l;
		width = w;
		area = a;
		perimeter = p;
	};
	//mutators
	virtual void setDimensions(){
		float l,w;
		cout << "ENTER LENGTH AND WIDTH: ";
		cin >> l >> w;
		length = l;
		width = w;
	}
	//accessors
	float getLength(){
		return length;
	}
	float getWidth(){
		return width;
	}
	float getArea(){
		return length * width;
	}
	float getPerimeter(){
		return 2*(length+width);
	}
};

class DormRoom : public Rectangle
{
private:
	float height,volume;
	int fans,windows,doors,lights;
public:
	DormRoom(){
		fans = 0;
		windows = 0;
		doors = 0;
		lights = 0;
	}
	DormRoom(int f, int w,int d,int l){
		fans = f;
		windows = w;
		doors = d;
		lights = l;
	}
	void setData(int f, int w,int d,int l){
		fans = f;
		windows = w;
		doors = d;
		lights = l;
	}
	void setDimensions(){
		Rectangle :: setDimensions();
		float h;
		cout << endl << "ENTER HEIGHT: ";
		cin >> h;
		height = h;
	}
	void computeVolume(){
		volume = length * width * height;
	}
	void display(){
		cout << "\nLENGTH:\t" << getLength() << endl;
		cout << "WIDTH:\t" << getWidth() << endl;
		cout << "HEIGHT:\t" << getHeight() << endl;
		cout << "AREA:\t" << getArea() << endl;
		cout << "VOLUME:\t" << getVolume() << endl;
	}
	//accessors
	float getHeight(){
		return height;
	}
	float getVolume(){
		return length * width * height;
	}
};

int main()
{
	/* code */
	DormRoom d;
	d.setDimensions();
	d.display();

	return 0;
}
