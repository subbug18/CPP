
#include<iostream>
#include<exception>
using namespace std;


void Division()
{


	int a=10, b=0, c;

	try
	{
		if(b==0) 
			throw "Division by zero";
		else
			 c = a/b;


		cout<<"a/b:"<<c<<endl;
	}
	catch(const char *mesg)
	{

		cerr<<mesg<<endl;
	}
}


void Division2()
{


	int a=10, b=0, c;

	try
	{

		 c = a/b;

	}
	catch(exception &e)
	{

		cerr<<e.what()<<endl;
	}

}

class MyExcpetion: public exception{
public:

	const char* what() const throw(){

		return "C++ exception";
	}
};


int main()
{

//	Division2();

	try
	{

		throw MyExcpetion();
	}catch(MyExcpetion &e){
		cout<<"My exception caught"<<endl;
		cout<<e.what()<<endl;
	}catch(exception &e){

		}
	

	return 0;

}

