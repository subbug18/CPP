#include <iostream>
using namespace std;

class A
{
  int x, y,z;


   public:
    A()
    {
        x = y = z = 0;
    }
    A(int xx, int yy = 'A', int zz = 'B')
    {
        x = xx;
        y = x + yy;
        z = x + y;
    }


      virtual void display()                      // virtual void display()
       {
        cout << "Hey from A" <<endl;
         cout<<"x:"<<x<<" "<<"y:"<<y<<"z:"<<z<<endl;
       }
};

class B : public A
{
    int x, y;
    public:
        
        B(int xx=65, int yy=66):A(x,y)
        {
          x = xx; y=yy;
        }
        void display()
        {

          cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
          
        }

};

void Hello(A &ob) // &ob  //*ob
{
   ob.display();       // ob->display()
}

int main()
{
    A obj;
    Hello(obj); // obj   //&ob

    obj.display(); // displaying B's members

    int a[]={1,2,3};
    cout<<a[-2];



    return 0;
} 