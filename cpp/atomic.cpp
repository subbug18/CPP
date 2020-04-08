#include<atomic>
#include <thread>
#include <atomic>
#include <iostream>

std::atomic<int> x(10);

std::atomic<int> y(1);

//int x =0;

void atomic_fun()
{
   // x += 1;
   y = y + 1;
    std::cout<<"x:"<<++x<<"\n";  //read, modify , write   // any trivially copyable  // no atomic multiply
}

int main()
{

  std::thread t1(atomic_fun);
  std::thread t2(atomic_fun);
  std::thread t3{atomic_fun};

  t1.join(); t2.join(); t3.join();
    
    return 0;
}