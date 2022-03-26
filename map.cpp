#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<pair<int,int>>p;
p.push_back({2,3});
p.push_back({4,5});
for(auto it:p)
cout<<it.first<<" "<<it.second<<"\n";
vector<pair<int,pair<int,int>>>p={1,{2,3}};
for(auto it:p)
cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
}
-----------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int>mp;
	int a[8]={5,1,2,3,4,1,2,3};
	for(int i=0;i<8;i++)
		mp[a[i]]++;
	for(auto it:mp)
		cout<<it.first<<" "<<it.second<<"\n";
	return 0;
}----------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<char,char>mp;
	int a[4]={'a','b','c','a'};
	for(int i=0;i<4;i++)
		mp[a[i]]++;
	for(auto it:mp)
		
		cout<<it.first<<" "<<it.second<<"\n";
	return 0;
}
---------------------------------------------------------------------

