#include<iostream>
using namespace std;

class Shape{

public:
	virtual void draw()
	{
		cout<<"Shape"<<endl;
	}
	void fun()
	{
		cout<<"Circle:fun()"<<endl;
	}

};

class Circle: public Shape
{

public:
	void draw()
	{
		cout<<"Circle"<<endl;
	}

};

class Eclipse: public Shape
{

public:
	void draw()
	{
		cout<<"Eclipse"<<endl;
	}
	
};

class Rectangle: public Shape
{

public:
	void draw()
	{
		cout<<"Rectangle"<<endl;
	}
};

class Square: public Shape
{
public:
	void draw()
	{
		cout<<"Square"<<endl;
	}

};


int main()
{
	Shape * sp;

	sp = new Shape();

	Rectangle *rp = dynamic_cast<Rectangle*>(sp);
	if(rp)
	{
		rp->draw();
	}
	else
	{
		cout<<"rp is NULL"<<endl;
	}

	Circle *tp = new Circle();

	
	Eclipse * rtp = dynamic_cast<Eclipse*>(tp);

	if(rtp)
	{
		rtp->fun();
	}
	else
	{
		cout<<"rtp is NULL"<<endl;
	}



	return 0;
}