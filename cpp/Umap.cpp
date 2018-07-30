#include<unordered_map>
//#include<unordered_multimap>
#include<memory>
#include<string>
#include <iostream>
using namespace std;

int main()
{

unordered_map<string, int>Umap;


Umap={ {"A",1123}, {"B", 2}, {"C", 3}, {"D", 4}, {"E", 5}, {"F", 6}, {"G", 8}, {"H", 9},{"A",10}};

unordered_map<string, int>::iterator it;

for ( auto it1 = Umap.begin(); it1!=Umap.end(); ++it1)
{
	cout<<"Frist:"<<it1->first<<" Second:"<<it1->second<<endl;
}
cout<<endl<<endl<<"***********************"<<endl;
for(auto &x:Umap)
{
	cout<<"Frist:"<<x.first<<" Second:"<<x.second<<" Is in Bucket#"<<Umap.bucket(x.first)<<endl;
}

for(unsigned int i=0; i< Umap.bucket_count(); i++ )
	
{
	cout<<"Bucket "<<i<<" Contains:"<<endl;

	for(auto ii=Umap.begin(i); ii!=Umap.end(i); ii++)
	{
		cout<<" "<<ii->first<<" : "<<ii->second<<endl;
	}
	cout<<endl;
}
cout<<"Bucket Count:"<<Umap.bucket_count()<<endl<<endl<<endl;





unordered_multimap<string, int> UMMap;
UMMap={ {"A",1123}, {"B", 2}, {"C", 3}, {"D", 4}, {"E", 5}, {"F", 6}, {"G", 8}, {"H", 9},{"A",10}, {"A",100}, {"A",1000}, {"F", 60}, {"G", 80}, {"H", 90}, {"F", 600}, {"G", 800}, {"H", 900} };



for (unsigned int i=0; i<UMMap.bucket_count(); i++)
{
	cout<<"Bucket "<<i<<" contains:"<<endl;
	for(auto ii=UMMap.begin(i); ii!=UMMap.end(i); ii++)
	{
		cout<<ii->first<<" "<<ii->second<<endl;
	}
	cout<<endl;
}

for(auto &yy:UMMap)
{

	cout<<"First:"<<yy.first<<" "<<"Count:"<<UMMap.count(yy.first)<<endl;

}

cout<<endl<<"unordered_multimap bucket count:"<<UMMap.bucket_count()<<endl;

	return 0;
}