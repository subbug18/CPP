#include <iostream> 
#include <sys/ipc.h> 
#include <sys/shm.h> 
#include <stdio.h>
#include <algorithm> 
#include <array>

using namespace std; 

int main() 
{ 
	// ftok to generate unique key 
	key_t key = ftok("shmfile",65); 

	// // shmget returns an identifier in shmid 
	// int shmid = shmget(key,1024,0666|IPC_CREAT); 

	// // shmat to attach to shared memory 
	// char *str = (char*) shmat(shmid,(void*)0,0); 

	// cout<<"Write Data : "; 
	// gets(str); 

	printf("Data written in memory: %u\n",key); 
	
	//detach from shared memory 
	//shmdt(str); 

  array<int, 5> a = {1,2,3,4,5};

  for_each(a.begin(), a.end(), [](const int &n){ cout<<"int:"<<n<< " ";});


	return 0; 
} 
