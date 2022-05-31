#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<pair<int, int>>p;
    int ar[]={5,6,7,8,9};
    int k=2;
    int x=7;
    for(int i=0;i<5;i++)
    {
        p.push({abs(ar[i]-x),ar[i]});
        if(p.size()>k)
        {
            p.pop();
        }
    }
    while(p.size()>0)
    {
        cout<<p.top().second<<" ";
        p.pop();
    }
    
    return 0;
}
