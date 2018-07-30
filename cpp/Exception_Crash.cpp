#include<iostream>

class A{

public:

	A(){

throw 43;	
	}

	~A(){

		
	}
};

int main(){

//try{

	A a;

	throw 32;

//#}catch(int e)
//{

//	std::cout<<"Exception caught:"<<e<<std::endl;
//}


	return 0;
}