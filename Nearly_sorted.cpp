#include<bits/stdc++.h>

using namespace std;

int bs(int arr[],int l,int r, int x)
{
    
    while(l<=r)
    {
        
        int mid = l+(r-l)/2;
        
        if(arr[mid]==x)
        {
            return mid;
        }
        if((mid-1)>=l && arr[mid-1]==x)
        {
            return mid-1;
        }
        if((mid+1)<=r && arr[mid+1]==x)
        {
            return mid+1;
        }
        else if(arr[mid]<x)
        {
            l=mid+2;
        }
        else
            r=mid-2;
        
            
        
    }
    return -1;
    
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int l=0;
    int end=n-1;
    int x;
    cin>>x;
    int d=bs(a,l,end,x);
    cout<<d;
    
    
    
    return 0;
    
}
