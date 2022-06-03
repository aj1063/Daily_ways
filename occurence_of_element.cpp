#include<bits/stdc++.h>

using namespace std;

int first(int a[],int n,int l,int end,int x)
{
    int res=-1;
    while(l<=end)
    {
        
        int mid=l+(end-l)/2;
        if(a[mid]==x)
            res=mid;
            end=mid-1;
        
        if(a[mid]>x) 
            end=mid-1;
        
        else
            l=mid+1;
            
    }

    return res;
    
    
}


int last(int a[],int n,int l,int end, int x)
{
    int res=-1;
    while(l<=end)
    {
        
        int mid=l+(end-l)/2;
        if(a[mid]==x)
            res=mid;
            l=mid+1;
        
        if(a[mid]>x) 
            end=mid-1;
        
        else
            l=mid+1;
            
    }
    
    return res;
    
    
}


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
    int s=first(a,n,l,end,x);
    int w=last(a,n,l,end,x);
    
    cout<<w-s+1;
}
