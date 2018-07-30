#include<vector>
#include<iostream>
#include<algorithm>


using namespace std;

int main(){
vector<int>v{1,2,3,4,5,6,7,8};
struct sum{
	int s;
	sum():s{0} { 

	 }
	void operator()(int n){
		s += n;
	}
	
};

auto display = [](const int &n){ cout<<" "<<n; };

for_each(v.begin(), v.end(), display); cout<<endl;
sum s  = for_each(v.begin(), v.end(), sum());
cout<<"sum:"<<s.s<<endl;
//for_each(v.begin(), v.end(), print);cout<<endl;
for_each(v.begin(), v.end(), [](int &n){ n++; });
for_each(v.begin(), v.end(), display);cout<<endl;

return 0;
}