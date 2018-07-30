#include<iostream>
#include<string>
#include<vector>

using namespace std;

class class_f {  
public:  
    class_f() = default;  
    class_f(string x) : m_string { x } {}  
    string m_string;  
};  
int main()  
{  
    class_f cf{ "hello" }; 
    
    initializer_list<class_f>object_list("hi");
    
    //, "Hello", "How", "are" , "you");

    
    vector<int> v3(6);


  //  class_f cf1{}; // compiler error C2280: attempting to reference a deleted function  
}  
