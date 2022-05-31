#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>p;
int main()
{
    vector<int>v;
int arr[]={6,2,5,1,3,4};
int k=3;
priority_queue<int,vector<int>,greater<int>>p;
for(int i=0;i<6;i++)
{
    p.push(arr[i]);
    if(p.size()>k)
    {
        v.push_back(p.top());
        p.pop();
    }
}
while(p.size()!=0)
{
v.push_back(p.top());
p.pop();
}
for(int i=0;i<6;i++){
    cout<<v[i]<<" ";
} 
}

