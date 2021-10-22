#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp)
{
    if(st.size()==0 || st.top()>=temp)
   {
       st.push(temp);
        return;
   }
   int var = st.top();
   st.pop();
   insert(st,temp);
   st.push(var);
    
}

void sort_stack(stack<int> &st)
{
    if(st.size()==1)
    return;
    
    int temp = st.top();
    st.pop();
    sort_stack(st);
    insert(st,temp);
}
int main()
{
    stack<int> st;
    st.push(4);
    st.push(8);
    st.push(5);
    st.push(9);
    st.push(0);
    st.push(3);
    //cout<<st.size()<<" ";
    sort_stack(st);
while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}
