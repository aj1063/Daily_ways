<-------Last Occurence of an element in a Sorted Array------------>


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int res=-1;
    int x;
    cin>>x;
    int l=0;
    int end=n-1;
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
    cout<<res;
    return -1;
    
}
