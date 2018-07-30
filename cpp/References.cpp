#include<iostream>
using namespace std;


class Base{

int x, y, z;
public:
	Base()
	{ 
		cout<<"Base:"
	}
	void SetValue(int &a, int &b)
	{
		a = 20;
		cout<<"a:"<<a<<endl;
		x =a;
		y=b;
		cout<<"b:"<<b<<endl;
		z = a + b;

	}

	void display()
	{

		cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
		cout<<"z:"<<z<<endl;
	}

};

class B: public Base{
	int t;
};
class C: public B{
	int w;
public:
	void fun(){ cout<<"fun()"<<endl;}
};

int main()
{
	cout<<"sizeof(A):"<<sizeof(Base)<<" sizeof(B):"<<sizeof(B)<<" sizeof(C):"<<sizeof(C)<<endl;

Base bb;
int x=10, y=20;

bb.SetValue(x, y);
bb.display();

B b;
cout<<"sizeof(b):"<<sizeof(b)<<endl;



return 0;


}