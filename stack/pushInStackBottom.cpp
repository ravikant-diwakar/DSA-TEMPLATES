#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#define ll long long
using namespace std;
 
 
void solve(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;

    }

    int topElement=s.top();
    s.pop();

    solve(s,target);

    s.push(topElement);
    

}

void insertAtBottom(stack<int> &s){
    if(s.empty()){
        cout<<"stack is empty"<<endl;
        return;
    }

    int target=s.top();
    s.pop();
    solve(s,target);


}
 
 
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    

    insertAtBottom(s);

    cout<<"printing the stack"<<endl;
    

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}
