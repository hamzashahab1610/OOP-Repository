#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

class Circle
{
protected:
	double radius;
public:
	Circle() {};
	Circle(double r) : radius(r) {};
	void setRadius(double r)
	{
		radius = r;
	}
	double getRadius()
	{
		return radius;
	}
	double calcArea()
	{
		return 3.14*radius*radius;
	}
	double calcCircumference()
	{
		return 2*3.14*radius;
	}
	virtual bool equals(Circle c)
	{
		if(radius == c.radius)
		{
			return true;
		}
		else
			return false;
	}
	string toString()
	{
		return std::to_string(radius);
	}
};

class Cylinder : public Circle
{
private:
	double height;
public:
	Cylinder() {};
	Cylinder(double r, double h) : radius(r), height(h) {}
	void setHeight(double h)
	{
		height = h;
	};
	double getHeight()
	{
		return height;
	}
	double calcArea()
	{
		return 2*3.14*radius*height + 2*3.14*radius*radius;
	}
	double calcVolume()
	{
		return 3.14*radius*radius*height;
	}
	virtual bool equals(Cylinder c)
	{
		if(height == c.height)
		{
			return true;
		}
		else 
			return false;
	}
	string toString()
	{
		return to_string(height + radius);
	}
};

/*public class Application
{
	public static void main(String []args){
		Circle cirlce1 = new Circle(3);
		Circle cirlce2 = new Circle(5);
	}
};*/

