#include<iostream>
#include<vector>



/**
    vector<int> v={1,2,3,4,5};

    for(const int &i:v){ cout<<i<<" ";} cout<<endl;
    for(auto &i:v){  cout<<i<<" ";} cout<<endl;
    for(int x:v){  cout<<x<<" ";} cout<<endl;
    for(auto &&i:v){  cout<<i<<" ";} cout<<endl;

    const auto &cv = v;
    for(auto &&i:v){  cout<<i<<" ";} cout<<endl;

    for(int n:{10,20,30,40,50}){  cout<<n<<" ";} cout<<endl;

    int a[]={4,5,6,7,8,9,10};
    for(int y:a){  cout<<y<<" ";} cout<<endl;
**/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <future>
#include<stdio.h>

template<class Type, class Desc>
constexpr decltype(auto) create(Desc desc) {
    static_assert(!std::is_abstract<Type>(), "T cannot be abstract.");
    static_assert(std::is_assignable<decltype(std::declval<Type>().getDesc()),
                                     decltype(desc)>::value,
                           "description can not be assigned to T description");
    auto type = Type();
    type.setDesc(desc);
    return &type;
}

int main() {
    /**
    std::string s = "c";
    std::async(std::launch::async, [&s]() {
        s = "b";
    });
    std::async(std::launch::async, [&s]() {
        s = "a";
    });
    std::cout << s;
    **/
   /***
   char ptr1[] = "Hello World"; 
char *ptr2 = malloc( 5 ); 
ptr2 = ptr1;

**/

     return 0;
}
