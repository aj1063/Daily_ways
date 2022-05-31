#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<pair<int, pair<int, int>>>p;
    int n;
    cin>>n;
    int k=2;
    int ar[n][2];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
    p.push({(ar[i][0]*ar[i][0]+ar[i][1]*ar[i][1]), {ar[i][0],ar[i][1]}});
        if(p.size()>k)
        {
            p.pop();
        }
    }
    while(p.size()>0)
    {
        pair<int, int>h=p.top().second;
        cout<<h.first<<" "<<h.second<<endl;
        p.pop();
    }
    
    
    
    
    return 0;
}
