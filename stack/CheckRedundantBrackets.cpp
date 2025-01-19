#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#define ll long long
using namespace std;
 
 
bool solve(string s){
     stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                st.push(ch);
                
            }
            else if(ch==')'){
                int topele=st.top();
                st.pop();
                if(topele!='+' || topele!='-' || topele!='*' || topele!='/'){
                    return true;
                }
            }
        }

        return false;
}
 
 
int main()
{
    string str;
    cin>>str;
    cout<<solve(str);
    
    
}
