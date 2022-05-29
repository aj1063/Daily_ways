<----Nearest Smallest to right brute force-------->

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

	int arr[4]={1,3,2,4};
	for(int i=0;i<4;i++)
	{
		int next =-1;
		for(int j=i+1;j<4;j++)
		{
			if(arr[i]>arr[j])
			{
				next=arr[j];
				break;
			}
						
		}
		cout<<arr[i]<<"---"<<next<<endl;
	
	
	}	
return 0;

}
