#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    char res='#';
    char x;
    cin>>x;
    int l=0;
    int end=n-1;
    while(l<=end)
    {
        int mid=l+(end-l)/2;
        if(a[mid]==x)
        {
            l=mid+1;
        }
        else if(a[mid]<x)
        {
            l=mid+1;
        }
        else
        {   
            res=a[mid];
            end=mid-1;
        }
    }

    cout<<res;
    return 0;
}

