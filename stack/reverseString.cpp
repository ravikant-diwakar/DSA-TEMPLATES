#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <map>
#define ll long long
using namespace std;
 
 

 
 
int main()
{
    string st="Rashid";

    stack<char> s;

    for(int i=0;i<st .length();i++){
        s.push(st[i]);
    }


    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

    cout<<endl;

    
    
}
