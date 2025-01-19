#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> st{11,7,3,12,4};
    int s=0;
    int k=st.size()-1;
    while(s<=k){
        swap(st[s],st[k]);
        s++;
        k--;
    }

    for(int i=0;i<st.size();i++){
        cout<<st[i];
    }

    return 0;

    
}