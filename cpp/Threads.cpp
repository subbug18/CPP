#include<unistd.h>
#include<iostream>
#include<pthread.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>
using namespace std;

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

int counter=0;


/* Thread start function */
static void * thread_start(void *arg)
{
	pthread_mutex_lock(&mutex1);
	char *mesg=(char*)arg;
	cout<<endl<<"Inside Thread function:"<<++counter<<endl;
	
	cout<<"Thread id:"<<pthread_self();
	pthread_mutex_unlock(&mutex1);

}

int main()
{

	 pthread_t pt[200];
	int res;

	char *mesg1="Thread";
	
	for(int i=0; i<15;i++)
	{
		/** Creating 1st Thread **/
		res=pthread_create(&pt[i], NULL, thread_start, mesg1);
		if(res!=0)
		{
			cout<<"Error in creating thread"<<endl;	
		}
	}	

for(int i=0; i<15;i++)
{

	/*** Joining 1st Thread ***/
	res=pthread_join(pt[i], NULL);
	if(res!=0)
	{
		cout<<"Error in joining thread"<<endl;	
	}
	else
	{
		cout<<"Thread joined"<<endl;	
	}
}

	return 0;
}