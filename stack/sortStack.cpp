#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>

#define ll long long
using namespace std;
 
 
void insertSorted(stack<int> &st,int target){
    
    //basse case
    if(st.empty()){
        st.push(target);
        return;
    }

    if(target<=st.top()){
        st.push(target);
        return;

    }

    int topele=st.top();
    st.pop();
    insertSorted(st,target);

    st.push(topele);


}

void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int topele=st.top();
    st.pop();
    sortStack(st);
    insertSorted(st,topele);

}
 
 
int main()
{
    stack<int> st;
    st.push(20);
    st.push(10);
    st.push(30);

    sortStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


    

    
}
