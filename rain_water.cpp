#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int left[n];
    left[0]=arr[0];
    int right[n];
    right[n-1]=arr[n-1];
    
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    
    int water[n];
    for(int i=0;i<n;i++){
        water[i]=min(left[i],right[i])-arr[i];
    }
    int sm = 0;
    for(int i=0;i<n;i++){
        sm+=water[i];
    }
    cout<<sm;
    
}
