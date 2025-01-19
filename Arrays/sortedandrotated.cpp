#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Given an array nums, return true if the array was originally sorted in non-decreasing order, 
//then rotated some number of positions (including zero). Otherwise, return false.
//There may be duplicates in the original array.

bool sortedandrotated(vector<int> st,int k){
    int count=0;
    int n=st.size();
    for(int i=1;i<k;i++){
        if(st[i-1]>st[i]){
            count++;

        }

    
    }

    if (st[n-1]>st[0])
        count++;

    return count<=1;

    
}


int main()
{
    vector<int> s{3,4,5,1,2};
    int k=s.size();
    sortedandrotated(s,k);
}