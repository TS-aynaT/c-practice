#include<bits/stdc++.h>
using namespace std;

void d_mid(stack<int> &st,int k)
{
    if(k==1)
        {
            st.pop();
            return;
        }
    
    int val = st.top();
        st.pop();
        d_mid(st,k-1);
        st.push(val);
    
}
void delete_mid(stack<int> &st)
{
    
    if(st.size()==0)
    return ;
    int k = (st.size()/2 +1);
    d_mid(st,k);
}
int main()
{
    stack<int> st;
    st.push(8);
    st.push(35);
    st.push(2);
    st.push(19);
    st.push(70);
    delete_mid(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
return 0;
}
