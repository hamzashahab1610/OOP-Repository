#include <iostream>
using namespace std;

class Door
{
protected:
	bool open;
	//int noOfDoors;
public:
	Door() {};
	
};

class Window
{
protected:
	bool open;
	//int noOfWindows;
public:
	Window() {};
	
};

class Engine
{
protected:
	bool on;
public:
	Engine() {};
	
};

class Wheels
{
protected:
	//int noOfWheels;
public: 
	Wheels() {};
	
};

class Car
{
private:
	Door d1,d2,d3,d4;
	Window w1,w2,w3,w4;
	Wheels t1,t2,t3,t4;
	Engine e1;
public:
	Car();
	
};