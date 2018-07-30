
#include<iostream>
#include<string>
using namespace std;
#include <utility>  
/**
class Sample{
    
private:
string first;
string last;
int id;

    public:   

   **/

 
   //auto fun( s&& s_str, t&& t_str="", int i=0 )

   //auto fun(int x, float d) -> decltype(x+d)

   template<typename s, typename t>
   decltype(auto) fun(s&& x, t&& d) // C++14
    {
        // cout<<"copy constructor:Sample()"<<endl;

        return forward<s>(x) + forward<t>(d);
        
     //   return x+d;

    }

int main(){
    
   // s<int>x{3};
    //t<float>f{1.3}

    auto re = fun(1,3.4f );

    cout<<"result:"<<re<<endl;
    
    
        return 0;
    }