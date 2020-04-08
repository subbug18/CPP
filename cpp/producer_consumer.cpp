#include<iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

using namespace std;

bool finished = false;

mutex mx;
condition_variable cv;
queue<int> q;

void producer(int argN)
{
  for (int i=0; i<argN; i++)
  {
   lock_guard<mutex> lk(mx);
   q.push(i);
   cout<<" pushing:"<<i<<"\n";
  }
  cv.notify_all();
  {
   lock_guard<mutex> lk(mx);
   finished = true;
  }
 cv.notify_all();
}

void consumer()
{

 while (true)
 {
   unique_lock<mutex> lk(mx);
   cv.wait(lk, []{return finished || !q.empty();});
   while (!q.empty())
   {
     cout<<"consuming" <<q.front()<<"\n";
     q.pop();
   }
   if (finished)
     break;
 }
}

int main()
{
 int n=10;
 thread t1(producer, n);
 thread t2(consumer);

t1.join();
t2.join();

cout<<"\nFinished\n";

return 0;

}

