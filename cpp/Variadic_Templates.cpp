#include<iostream>

/**
void fun(){
    std::cout<<std::endl;
}
**/


template<typename T>
void fun(const T &tt){
    std::cout<<tt<<std::endl;
}

template<typename First, typename... args>
void fun(const First &first, const args&... list ){

    std::cout<<first<<",";

    fun(list...);
}

template<typename Num>
auto  Sum(Num&& n){
    return n;
}

template<typename No1, typename... List>
decltype(auto) Sum(No1 &&no1, List&&... list ){

    return no1 + Sum(list...);
}



int main(){

//template<typename t, typename...>

int a_val=10;
 fun(a_val, 3, 4);
fun(1,5,6,7,7);
fun(1,'a',"subbu", "kiran",3,5);

std::cout<<"sum(1,2,3,4,5):"<<Sum(1,2,3,4,5)<<std::endl;
std::cout<<"sum(10,20,30:"<<Sum(10,20,30)<<std::endl;
    

    return 0;
}