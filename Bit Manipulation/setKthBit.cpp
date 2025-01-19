#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int mask=1<<k;
    int ans= n | mask;
    cout<<ans;
}