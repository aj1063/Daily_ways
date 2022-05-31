#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>>p;
    int n;
    cin>>n;
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
            cin>>ar[i];
        
    }
    for(int i=0;i<n;i++)
    {
        p.push(ar[i]);
    }
    int tt=0;
    while(p.size()>=2)
    {
        int x=p.top();
        p.pop();
        int y=p.top();
        p.pop();
        tt=tt+x+y;
        p.push(x+y);
    }
    cout<<tt;
    
    
    
    
    return 0;
}
