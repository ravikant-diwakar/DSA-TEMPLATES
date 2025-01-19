#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <limits.h>


#define ll long long
using namespace std;
 

void prevSmallele(vector<int> &ans){
    vector<int> output(ans.size());
    stack<int> st;
    st.push(-1);

    for(int i=0;i<ans.size();i++){
        int curr=ans[i];
        while(st.top()>=curr){
            st.pop();
        }
        output[i]=st.top();
        st.push(curr);
    }

    //printing the vector

    for(auto it:output){
        cout<<it<<" ";
    }
}
 
void nextSmallele(vector<int> &ans){
    stack<int> st;
    st.push(-1);
    vector<int> output(ans.size());
    for(int i=ans.size()-1;i>=0;i--){
        int curr=ans[i];
        while(st.top()<=curr){
            st.pop();
        }
        output[i]=st.top();
        st.push(curr);
    }

    //printing the vector

    for(auto it:output){
        cout<<it<<" ";
    }
    

    
}
 
//bnuteforce approach will do it in 0(n^2)
//but Using stack we will solve it in 0(n)
int main()
{
    
    vector<int> ans={2,1,4,3};

    
    prevSmallele(ans);
}