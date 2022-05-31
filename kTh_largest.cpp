#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>p;
int main()
{
int arr[]={31,12,15,7,11,21,4,1};
int k=4;
priority_queue<int,vector<int>,greater<int>>p;
for(int i=0;i<8;i++)
{
    p.push(arr[i]);
    if(p.size()>k)
    {
        p.pop();
    }
}
cout<<p.top();
/*
while(mp.size()!=0)
{
    cout<<mp.top().second<<" ";
    mp.pop();
}
  */  
}

