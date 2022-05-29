#include<bits/stdc++.h>

using namespace std;

stack<int>s;
int min1;

void push1(int a)
{
    
    if(s.size()==0)
    {
        s.push(a);
        min1=a;
    }
    else
    {
        if(a>=min1)
        {
            s.push(a);    
        }
        else
        {
            s.push(2*a-min1);
            min1=a;
        }
    }
    return;
}

void pop1()
{
    if(s.size()==0)return;
    
    else
    {
        if(s.top()>=min1)
        {
            s.pop();
        }
        else
        {
            min1=2*min1-s.top();
            s.pop();
        }
    }
        
}

int getmin()
{
    if(s.size()==0)return -1;
    
    return min1;
    
}

int top1()
{
    if(s.size()==0)return -1;
    else
    {
        if(s.top()>=min1)
        {
            return s.top();    
        }    
        else
        {
            return min1;
        }
    }
    
    
}


int main()
{
    push1(18);
    push1(19);
    push1(29);
    cout<<getmin()<<endl;
    pop1();
    push1(15);
    int n=getmin();
    cout<<n<<endl;
    pop1();
    push1(16);
    int m=getmin();
    cout<<m<<endl;
    
    
    
    return 0;
    
    
    
    
    
    
}
