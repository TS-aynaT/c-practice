#include<bits/stdc++.h>
using namespace std;
//JOSEPHUS MORGAN PROBLEM
void josephus_problem(vector<int> arr, int k, int index)
{   

    if(arr.size()==1)
    {
        cout<<arr[0];
        return;
    }
    
    index = (index+k)% arr.size();
    arr.erase(arr.begin()+index);
    josephus_problem(arr,k,index);
    return;
}

int main()
{
    int k,index=0;
    int n;
    vector<int> arr;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            arr.push_back(i);
        }
        
   
    
    cout<<"Enter k:";
    cin>>k;
    k--;
        
        josephus_problem(arr,k,index);
return 0;
}
