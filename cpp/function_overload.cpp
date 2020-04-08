#include <iostream>

using namespace std;

void fun (int arg){ cout<<"fun(int arg)"<<"\n";}
//void fun (int arg1, int arg2){ cout<<"fun (int arg1, int arg2=10)"<<"\n"; }
void fun (int arg1, int arg2=2, int arg3=3){ cout<<"fun (int arg1, int arg2=10, int arg3)"<<"\n"; }

int main()
{ 
  //  fun(10);
  //  fun(10,20);
    fun(1,2,3);
    fun(1);
    fun(1,2);

    return 0;
}