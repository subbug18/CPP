#include<iostream>
using namespace std;

template<class T, class u>
class A
{
 public:
 	A(){}
 	T describe(T x, u y)
 	{
		 cout<<sizeof(T)<<" "<<sizeof(u)<<endl;
		 cout<<"x:"<<x<<" y:"<<y<<endl;	
		 return x;
	}

};

template<typename z, typename w>
z fun( z x, w y)
{
	cout<<"fun:"<<x<<" "<<y<<endl;
	//cout<<"fun:"<<y<<" "<<y<<endl;

	return x;
}


int main()
{

	A<int, int>a;
	cout<<"a:"<<a.describe(1,2)<<endl;

	A<float, int>b;
	cout<<"b:"<<b.describe(1.23,4)<<endl;

	//template<typename z, typename w>
	//int fun(int, float);
	cout<<"fun(10,1.3f):"<<fun(10, 1.3f)<<endl;


	return 0;

}