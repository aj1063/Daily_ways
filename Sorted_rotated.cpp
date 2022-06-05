<-------Index of element sorted roted array---->


#include<bits/stdc++.h>

using namespace std;

int minin(int arr[],int l,int r, int n)
{
    int res=-1;
    while(l<=r)
    {
        
        int mid = l+(r-l)/2;
        int pre=(mid+1)%n;
        int next=(mid+n-1)%n;
        
        
        if(arr[mid]<=arr[r] && arr[mid]<=arr[next])
        {
            res=mid;
        }
        else if(arr[l]<arr[mid]){
            l=mid+1;
        }
        else if(arr[r]>arr[mid])
        {
            r=mid-1;
        }
            
        
    }
    return res;
    
}


int bs(int arr[],int l,int r, int x)
{
    int res=-1;
    while(l<=r)
    {
        
        int mid = l+(r-l)/2;
        
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
            
        
    }
    return res;
    
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
    int q=minin(a,l,end,n);
    int w=bs(a,l,q-1,x);
    int d=bs(a,q,end,x);
    cout<<w<<endl;
    cout<<d;
    
    
    
    return 0;
    
}
