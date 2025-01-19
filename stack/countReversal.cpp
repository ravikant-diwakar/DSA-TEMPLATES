#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#define ll long long
using namespace std;
 
 
void solve(){}
 
//Input:
//S = "}{{}}{{{"
//Output: 3
// Explanation: One way to balance is:
// "{{{}}{}}". There is no balanced sequence
// that can be formed in lesser reversals.

int main()
{
    string s;
    cin>>s;

    if(s.size()&1){
        cout<< -1;
    }
    stack<char> st;
    int count =0;
    for(auto ch:s){
        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(st.empty()){
                st.push(ch);
                
            }
            else if(st.top()=='{'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    
  
        while(!st.empty()){
            char ele1=st.top();
            st.pop();
            char ele2=st.top();
            st.pop();
            if(ele1==ele2){
                count++;
            }
            else{
                count+=2;
            }
        }
    
    
    cout<<count;
    
    
}
