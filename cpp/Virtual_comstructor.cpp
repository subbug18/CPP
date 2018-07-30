#include<iostream>
using namespace std;
class A
{
public:
	A(){cout<<"A Constructor"<<endl; }
	virtual ~A(){ cout<<"A Destructor"<<endl;}
	virtual void fun(){ cout<<"A::fun()"<<endl;}
};
class B: public A{
public:
	B(){cout<<"B Constructor"<<endl;}
   ~B(){ cout<<"B Destructor" <<endl;}
};
class C: public B{
public:
	C()
	{
		cout<<"C Constructor"<<endl;
		A *ap = new A();
		ap->fun();
		delete ap;
	}
   ~C(){ cout<<"C Destructor" <<endl;
		A *ap = this;
		ap->fun();
		}
   
		void fun()
		{
			cout<<"C::fun()"<<endl;
		}


};


int main(){

	C *cc = new C();
	delete cc;
	
	return 0;

}


















