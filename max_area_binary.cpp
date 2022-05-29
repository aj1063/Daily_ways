#include<bits/stdc++.h>

using namespace std;

vector<int> NSL(vector<int> &arr, int n)
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

vector<int> NSR(vector<int> &arr, int n)
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


int MAH(vector<int> &arr, int n)
{
    vector<int>v1=NSL(arr, n);
    vector<int>v2=NSR(arr, n);
    vector< int >w(n);
	for(int i=0;i<n;i++){w[i]=(v2[i]-v1[i]-1);}
	vector<int>area(n);
	for(int i=0;i<n;i++){area[i]=arr[i]*w[i];}

	int mx = 0;
	for(int i=0;i<n;i++)
	{
	    if(area[i]>mx)
	    {
	        mx = area[i];
	    }
    }

    return mx;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    vector<int>v(m);
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]);
    }
    int mx=MAH(v, m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(arr[i][j]==0)
            {
                v.push_back(0);
            }
            else
            {
                v[j]=v[j]+arr[i][j];
            }
        }
        mx = max(mx, MAH(v,m));
    }
     cout<<"Maximum area----"<<mx;    
    
}

