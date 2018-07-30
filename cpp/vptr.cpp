#include<iostream>
using namespace std;
#define __cdecl __attribute__((__cdecl__))


class Sample
{

public:
	virtual void __cdecl fun(int q)
	{

		cout<<"fun:"<<q<<endl;

	}

	void g()
	{

		int *p = (int*)this;
		p =(int*)*p;
		p=(int*)*p;

		void (__cdecl *pfun)(Sample *const, int);
		pfun=(void (__cdecl*)(sample *const, int)) p;
		(*pfun)(this, 25);
	}


};

int main()
{
	Sample s;
	s.g();

}