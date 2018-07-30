#include<iostream>
using namespace std;

class Base
{

int x;
public: 
	Base(){  cout<<"Base: Base()"<<endl; }
	Base(int xx){  cout<<"Base: Base(int)"<<endl;  x = xx; }

	virtual void fun()=0;
	

	virtual ~Base()
	{
		cout<<"Base:~Base()"<<endl;
	}
};

class Derived: public Base
{
	int y;

public:
	void fun(int x, int y): Base(x)
	{

		cout<<"Derived:fun()"<<endl;
		this->y = y;
		//Base::fun();
	}

	~Derived()
	{
		cout<<"Derived: ~Derived()"<<endl;
	}
};

int main()
{

	Base *bp =new Derived(10, 20);

	bp->fun();

	delete bp;


	return 0;
}