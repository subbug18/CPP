#include<iostream>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<vector>

using namespace std;
pthread_mutex_t mutex1= PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond1= PTHREAD_COND_INITIALIZER;

void *thread_fun1(void*);
void *thread_fun2(void*);

int counter =0;

#define COUNT_DONE 10000000
#define COUUNT_HALT1 3300000
#define COUNT_HALT2 6600000

vector<int>v1;


int main()
{

	pthread_t pt[2];

	int res;

	res = pthread_create(&pt[0], NULL, thread_fun1, NULL);

	if(res!=0)
	{
		cout<<"Error in creating thread"<<endl;

	}

	res = pthread_create(&pt[1], NULL, thread_fun2, NULL);
	
	if(res!=0)
	{
		
		cout<<"Error in creating thread"<<endl;

	}

	pthread_join( pt[0], NULL);
    pthread_join( pt[1], NULL);

    cout<<"Count in main:"<<counter<<endl;


    for(auto &v:v1)
    {
    	cout<<v<<" ";
    }
    cout<<endl;

	return 0;
}


void *thread_fun1(void *arg)
{	

	for(;;)
	{

		pthread_mutex_lock(&mutex1);
		cout<<"Function1"<<endl;

		pthread_cond_wait(&cond1, &mutex1);

		counter++;  v1.push_back(counter);

		cout<<"Function1 - counter:"<<counter<<endl;

		pthread_mutex_unlock(&mutex1);

		if(counter >= COUNT_DONE) return NULL;	
	
	}

}



void *thread_fun2(void *arg)
{

	for(;;)
	{

		pthread_mutex_lock(&mutex1);
		cout<<"Function2 "<<endl;

		if(counter < COUUNT_HALT1 || counter > COUNT_HALT2)
		{

			pthread_cond_broadcast(&cond1);
		}
		else
		{
			counter++;
			v1.push_back(counter);
			cout<<"Function2 - counter:"<<counter<<endl;
		}

		pthread_mutex_unlock(&mutex1);

		if(counter>=COUNT_DONE)
			return NULL;
	}
}




