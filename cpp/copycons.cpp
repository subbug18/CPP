#include<iostream>
using namespace std;

class Circle
{
	int radius;
	float x, y;
public:
	Circle()
	{
		radius=0;
		x=0.0;
		y=0.0;
	}
	Circle(int r, float x1, float y1)
	{
		radius=r;
		x=x1;
		y=y1;

	}

	Circle operator =(const Circle &c1)
	{
		cout<<"Assigment called"<<endl;
		radius = c1.radius;
		x = c1.x;
		y = c1.y;
		
		return Circle(radius,x,y);
	}

	Circle(const Circle &ref)
	{
		cout<<"Coppy constructor called"<<endl;
		this->radius = ref.radius;
		this->x = ref.x;
		this->y = ref.y;
	}

	void showdata()
	{

		cout<<"radius:"<<radius<<endl;
		cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
	}

};

int main()
{

	Circle C1;
	C1.showdata();

	Circle C2(1,1.1, 2.2);
	C2.showdata();

	Circle C3(C2);
	C3.showdata();

	C1 = C2;
	C1.showdata();

	C1=C2=C3;
	

	return 0;
}