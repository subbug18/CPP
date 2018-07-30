#include<iostream>
#include<string>

using namespace std;


struct S
{
    int n = 7;
    string m_str{'a', 'b', 'c'};
    S() // copy-initializes n, list-initializes s
    { }

    template<typename s, typename t>
   // S(int &&x, string &&y):n(move(x)), s(move(y))
    S(s&& x, t&& y): n(forward<s>(x)), m_str(forward<t>(y))
    {
        
    }

    void printData(){
        cout<<"n:"<<n<<" s:"<<m_str<<endl;
    }
};




int main(){


    S s1;
    s1.printData();
  

    string str="subbu";
    int x =100;


    S s2(move(x), move(str));
    s2.printData();
    

    S s3(1, "Ravi");
    s3.printData();
   
return 0;
   
}