#include<iostream> using namespace std;


int fact(int n){

if (n==1)     return 1; if(n<1)     return 1;

else      return n*fact(n-1);



int main(){


int fact(int);       int n;     cout<<"Enter n value"<<endl;     cin>>n;

	cout<<"fact:"<<fact(n);

    return 0; }
