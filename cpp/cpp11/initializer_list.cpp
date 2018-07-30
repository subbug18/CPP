
#include<iostream>
#include<string>
#include<memory>

//#include<initializer_list>

using namespace std;

class myClass{
   
   private:
    int a, b;
    double c;
    string d;


    public:

    

    myClass():myClass( 1, 2, 3.0, "subbu"){
        cout<<"myClass()"<<endl;
             
    }
    myClass(int l):myClass(l,10, 41.0034, "ravi"){
        cout<<"myClass(int l)"<<endl;
    }
      
   myClass(int x, int y, double z, const string & t):a(x), b(y), c(z), d(t){
       cout<<"myClass(int x, int y, dobule z, string t)"<<endl;
   }

};

class Sample{

    public:

    int x,y;
    Sample()=default;
   

    Sample(const Sample& s){
         cout<<"copy constructor:Sample()"<<endl;
        this->x=s.x;
        this->y=s.y;
    }
/*
    Sample(Sample&& s_obj){
        cout<<"Sample &&&&"<<endl;
        this->x=s_obj.x;
        this->y=s_obj.y;

    }
    */
    
    Sample(int,int){
        cout<<"Sample(int,int)"<<endl;
    }

    Sample(initializer_list<int>){
        cout<<"intializer_list f"<<endl;
    }
    /***

Sample operator =(const Sample &t){
    
    this->x=t.x;
    this->y=t.y;
    cout<<"Sample assigment called"<<endl;
}
**/

~Sample(){cout<<"destructor called"<<endl;}
};

class class_a {  
public:  
    class_a() {}  
    class_a(string str) : m_string{ str } {}  
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }  
    double m_double{ 1.0 };  
    string m_string{ m_double < 10.0 ? "alpha" : "beta" };  
};

void printReference (const int& value)
{
        cout << "lvalue:"<<value<<endl;
}
  
void printReference (int&& value)
{
        cout <<"rvalue:" <<value<<endl;
}


int getValue ()
{
    int temp_ii = 99;
    return temp_ii;
}


int main()
{

    const int a_val =10;
    int&& x_val =97;
    
    printReference(getValue());
    printReference(1000);

    //printReferencex);
    

    myClass a();
    myClass mobj(40);
    myClass nobj{10, 20, 4.02, "kiran"};

    //Sample s1(1,2);

    Sample s2{10, 20};

    Sample s3(move(s2));
    //Sample s4(getValue(), getValue());  
   
   //s4 =s1;

    cout<<s2.x<<" "<<s2.y<<endl;

    class_a abc{ "hello", 2.0 };  //expect a.m_double == 2.0, a.m_string == "hello"  
    int y = 4;  

    cout<<"a.m_double:"<<abc.m_double<<"a.m_string:"<<abc.m_string<<endl;

    //auto x = initializer_list<int>{1,2,3};

    int&& rvalue_ref = 99;

    int x =rvalue_ref;




    
    return 0;
}
