#include<iostream>
using namespace std;
#include<stdlib.h>

int fact(int n){

if (n==1)
	return 1;
else 
	return n*fact(n-1);

}

void MemoryManamgement(){

int x =10;
int *p = new int(10);
free(p);

p[11]=34;


int *q = &x;
int * r = &x;

int * s = (int*)malloc(sizeof(int)*100);
free(s);
s[9]=123;



int add(int a){
	return a;
}
float add(int a, int b=10){ return a+b;}

int main(){

	int x;
	if(x==0){ cout<<"x==0"<<endl;}
	else{cout<<"x!=0"<<endl;}

	int y[10];
	y[11]=456;

MemoryManamgement();

int fact(int);	
	int n;
	cout<<"Enter n value"<<endl;
	cin>>n;

	cout<<"fact:"<<fact(n);

	cout<<add(10);



	return 0;
}

