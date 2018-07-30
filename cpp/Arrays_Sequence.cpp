#include<map>
#include<iostream>
#include<utility>
#include<bits/stdc++.h>
//using namespace std::pair;
using namespace std;


bool compare(pair<int, int>&p1, pair<int, int> &p2)
{

	if(p1.second == p2.second)
	{
		return p1.first < p2.first;

	}

	return p1.second > p2.second;

}

int main()
{

	//int a[]={8,9,10,4,5,3,4,5,10,1,2,8,9,7,6,3,3,9,8,1,1,2,1,5};
	int a[]={2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12};
	map<int, int>list;
	//map<int,int, comparator=

	int n=sizeof(a)/sizeof(int);

	int s =list.size();

	for(int i=0;i<n;i++)
	{
		list[a[i]]++;
	}

	pair<int,int>p[20];

	int k=0;
	
	for(auto &ii:list)
	{
		//cout<<ii.first<<" "<<ii.second<<endl;
		p[k++] = make_pair(ii.first, ii.second);

	}
	
	sort(p, p+s, compare);	

	for(int i=0;i<s;i++)
	{
		int frequency = p[i].second;

		while(frequency--)
		{
			cout<<p[i].first<<" ";

		}

	}

	cout<<endl;
	

	return 0;
}