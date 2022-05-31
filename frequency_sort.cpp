#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<pair<int, int>>p;
    int n;
    cin>>n;
    int ar[n];
    /*{5,5,7,81,5,,6,7,8,9,9};*/
    for(int i=0;i<n;i++)cin>>ar[i];
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[ar[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        p.push({i->second,i->first});
    }
    while(p.size()>0)
    {
        for(int i=0;i<p.top().first;i++)
        {
            cout<<p.top().second<<" ";    
        }    
        p.pop();
    }
    
    
    
    
    return 0;
}
