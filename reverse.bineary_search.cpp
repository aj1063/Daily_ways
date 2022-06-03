#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int x;
    cin>>x;
    int l=0;
    int end=n-1;
    while(l<=end)
    {
        
        int mid=l+(end-l)/2;
        if(a[mid]==x)
            cout<<mid;
        
        if(a[mid]>x) 
            l=mid+1;
        
        else
            end=mid-1;
            
    }
    return -1;
    
}
