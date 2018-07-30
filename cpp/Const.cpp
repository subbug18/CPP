#include<iostream>
using namespace std;
class A
{
	int x;
	public:A(){x=0;}
	void fun()const  {
	//x = x+1;
	cout<<"a::fun()"<<x<<endl;

	}	
};

int add(int x, int y){ return x+y; }
float add(float x, int y=10){ float z = x+y; return z;}


int main(){
	 A a;
	a.fun();

	cout<<add(1,2)<<endl;
	cout<<add(3.1f)<<endl;
}