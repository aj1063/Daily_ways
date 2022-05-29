<-----Maximum area histogram------->

#include<bits/stdc++.h>

using namespace std;

vector<int> NSL(int arr[], int n)
{   
    stack<pair<int,int>>s;
	vector<int>left;
	int m = -1;
	for(int i=0;i<n;i++)
	{
		if(s.size()==0)left.push_back(m);
		else if(s.size()>0 && s.top().first<arr[i])
		{
			left.push_back(s.top().second);
		}
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
			{
				s.pop();
			}
			if(s.size()==0)left.push_back(m);
			else
			{
				left.push_back(s.top().second);
			}	
		}
		s.push({arr[i],i});	
		}
	return left;
}

vector<int> NSR(int arr[], int n)
{
	stack<pair<int,int>>s1;
	vector<int>right;
	int q=n;
		for(int i=n-1;i>=0;i--)
	{
	    if(s1.size()==0)right.push_back(q);
		else if(s1.size()>0 && s1.top().first<arr[i])
    	{
    		right.push_back(s1.top().second);
    	}	
		else if(s1.size()>0 && s1.top().first>=arr[i])
    	{
	    	while(s1.size()>0 && s1.top().first>=arr[i])
		    {
			    s1.pop();
		    }
	    	if(s1.size()==0)right.push_back(q);
	    	else
		    {
			    right.push_back(s1.top().second);
		    }	
    	 }
	    s1.push({arr[i],i});
    }
reverse(right.begin(), right.end());
return right;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){cin>>arr[i];}
	vector<int>v1;
	v1 = NSL(arr,n);
	vector< int >v2;
	v2 = NSR(arr,n);
	vector< int >w(n);
	for(int i=0;i<n;i++){w[i]=(v2[i]-v1[i]-1);}
	vector<int>area(n);
	for(int i=0;i<n;i++){area[i]=arr[i]*w[i];}
	for(int i=0;i<n;i++)
	{
	    cout<<area[i]<<" ";
	}
	return 0;
}

