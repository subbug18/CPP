#include<iostream>
using namespace std;
class A
{
public:
	A(){cout<<"A Constructor"<<endl; }
	virtual ~A(){ cout<<"A Destructor"<<endl;}
	virtual void fun(){ cout<<"B"}
};
class B: public A{
public:
	B(){cout<<"B Constructor"<<endl;}
   ~B(){ cout<<"B Destructor" <<endl;}
};
class C: public B{
public:
	C(){cout<<"C Constructor"<<endl;}
   ~C(){ cout<<"C Destructor" <<endl;}
};


class Singleton{

	
	Singleton()
	{


	}
	~Singleton()
	{
		
		delete sInstance;

	}

	public:
		void SingletonPrint(){
			cout<<"Hi Singleton"<<endl;
		}
	
	static Singleton *sInstance;

	static Singleton *getInstance()
	{
		if(sInstance!=NULL)
		{
			sInstance = new Singleton;
		}
		else
		{
			return sInstance;
		}
	}

};

Singleton* Singleton::sInstance=0;

int main(){

	Singleton *sp = Singleton::getInstance();
	cout<<"sp value:"<<sp<<endl;
	sp->SingletonPrint();

	Singleton *tp = Singleton::getInstance();
	tp->SingletonPrint();
	cout<<"tp value:"<<tp<<endl;

	Singleton::~Singleton();

	A *ap = new C();
	delete ap;
	return 0;
}