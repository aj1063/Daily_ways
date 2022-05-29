#include<bits/stdc++.h>

using namespace std;

stack<int>s;
stack<int>ss;

void push1(int a)
{
    s.push(a);
    if(ss.size()==0 || ss.top()>=a)
    {
        ss.push(a);
    }
    return;
}

int pop1()
{
    if(s.size()==0)
    {
        return -1;
    }
    int ans = s.top();
    s.pop();
    if(ss.top()==ans){
        ss.pop();
    }
    return ans;
}

int getmin()
{
    if(ss.size()==0)return -1;
    
    return ss.top();
    
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
