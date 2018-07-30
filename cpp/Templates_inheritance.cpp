#include<iostream>
#include<vector>

class MyClass{

};

class Derived: public MyClass{

};

template<typename T, size_t size>
class MyArray{
    T arr[size];

    public:
    MyArray(){  }
};



int main(){


MyArray<MyClass* , 10>arr;

std::vector<MyClass*> v1;    
std::vector<MyClass> v2;

Derived d1; MyClass m1; 
v2.push_back(d1); v2.push_back(m1);

v1.push_back(new Derived());
v1.push_back(new MyClass());

v1.reserve(10);
std::cout<<"sizeof(Vector):"<<v1.size()<<std::endl;
std::cout<<"capacity:"<<v1.capacity()<<std::endl;

v1.resize(20);
std::cout<<"sizeof(Vector):"<<v1.size()<<std::endl;
std::cout<<"capacity:"<<v1.capacity()<<std::endl;







return 0;
}