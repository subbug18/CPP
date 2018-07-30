#include<iostream>
using namespace std;


template<class T>
void fun(T v)
{
	cout<<"Inside Function TEmplate"<<endl;

}

template<>
void fun(int v)
{
	cout<<"Templates Specilaization"<<endl;

}


template<class T>
class Sample
{

	T x;
public:
	Sample(T x1)
	{
		cout<<"Sample::fun()"<<endl;
		x=x1;

	}
	void fun()
	{
		cout<<"Sample"<<"x:"<<x<<endl;
	}

};

template<>
class Sample <int>
{

	int x;
public:
	Sample(int x1)
	{
		x=x1;
		cout<<"Special::fun()"<<endl;
		
	}
	void fun()
	{
		cout<<"Special"<<"x:"<<x<<endl;
	}

};


int main()
{	

	int x=10;
	char ch='A';

	fun(x);
	fun(ch);
	fun(10);


	Sample<float> ff(1.2f);
	ff.fun();

	Sample<int> gg(10);
	gg.fun();

	return 0;
}