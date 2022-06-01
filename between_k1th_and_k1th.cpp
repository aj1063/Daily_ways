#include <bits/stdc++.h>

using namespace std;


int kthsmallest(vector<int>&a, int k)
{
    priority_queue<int>p;
    for(int i=0;i<a.size();i++)
    {
        p.push(a[i]);
        if(p.size()>k)
        {
            p.pop();
        }
    }
    
    return p.top();
}



int main()
{
    int sm = 0;
    vector<int>v={2,6,5,3,11,10,12};
    int k1=2;
    int k2=6;
    int x=kthsmallest(v,k1);
    int y=kthsmallest(v,k2);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x and y>v[i])
        {
            sm+=v[i];
        }
    }
    
    cout<<sm;
    
    
    
    
    

    return 0;
}

