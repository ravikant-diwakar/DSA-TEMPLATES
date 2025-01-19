#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#define ll long long
using namespace std;


void insertAtBottom(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;

    }

    int topElement=s.top();
    s.pop();

    insertAtBottom(s,target);

    s.push(topElement);
    

}


void solve(stack<int> &s){
    if(s.empty()){
        
        return;
    }

    int ele=s.top();
    s.pop();
    solve(s);

    insertAtBottom(s,ele);


}
 
 
int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    solve(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
