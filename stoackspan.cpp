#include<bits/stdc++.h>
using namespace std;
//code to calculate stock span
#define mp make_pair
vector <int> calculateSpan(int price[], int n)
{
   // Your code here
   vector<int>vec(n,0);
   stack<pair<int,int> > st;
   for(int i=n-1;i>=0;i--)
   {
       if(st.empty())
        st.push(mp(price[i],i));
        else
        {
            while(!st.empty()&&st.top().first<price[i])
            {
                vec[st.top().second]=i+1;
                st.pop();
            }
            st.push(mp(price[i],i));
        }
   }
   vector<int>ans(n,1);
   for(int i=0;i<n;i++)
   {
       if(vec[i]!=-1)
        ans[i]=i-vec[i]+1;
   }
   return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    int values[n];
    for(int i=0;i<n;i++)
        cin>>values[i];
    
    vector<int> ans =calculateSpan(values,n);
    
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    
    return 0;
}
