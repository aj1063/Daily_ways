#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>p;
int main()
{
int arr[]={3,2,5,7,31,21,3,3,2,7,7,7};
int k=2;
unordered_map<int, int>m;
for(int i=0;i<12;i++)
{
    m[arr[i]]++;
}
priority_queue<p,vector<p>,greater<p>>mp;
for(auto i=m.begin();i!=m.end();i++)
{
    mp.push({i->second,i->first});
    if(mp.size()>k)
    {
        mp.pop();
    }
}
while(mp.size()!=0)
{
    cout<<mp.top().second<<" ";
    mp.pop();
}
    
}

