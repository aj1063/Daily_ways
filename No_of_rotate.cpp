


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int l=0;
    int end=n-1;
    int mid=l+(end-l)/2;
    while(l<=end)
    {
        
        int pre=(mid+1)%n;
        int next=(mid+n-1)%n;
        
        
        if(a[mid]<=a[pre] && a[mid]<=a[next])
        {
            
            
            cout<<n-mid;
            break;
        }
        else if(a[l]<=a[mid]) 
            l=mid+1;
        
        else if(a[end]>=a[mid])
            end=mid-1;
            
    }
    
    
}
