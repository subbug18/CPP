#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


auto findV(vector<int> &v, int y)
{
	auto x = find(begin(v), end(v), y);

	if(x!=end(v))
	{
		cout<<"found";
		return x;
	}
	else
	{
		cout<<"not found"<<endl;
		return x;
	}
}

int main()
{

	auto x=10;
	vector<int>v{1,2,3,4,5,6,7,8,9,10};

	auto y = findV(v, x);

//	cout<<y<<endl;

	return 0;
}	