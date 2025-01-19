#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>

#define ll long long
using namespace std;
 
 
void solve(){}
 
 
int main()
{
    stack<int> st;
    st.push(20);
    st.push(10);
    st.push(40);


    st.pop();

    //prints the top element of the stack
    cout<<"element on top is:"<<st.top()<<endl;
    
    //gets the size of the stack
    cout<<"size of stack is:"<<st.size()<<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    
}
