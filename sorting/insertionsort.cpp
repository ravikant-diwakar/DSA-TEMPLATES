#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void insertionsort(vector<int> st,int k){
    for(int i=0;i<k;i++){
        int temp=st[i];
        int j=i-1;
        for (;j>=0;j--){
            if(st[j]>temp){
                st[j+1]=st[j];


            }
            else{
                break;

            }

        }

        st[j+1]=temp;
    }

     for(int i=0;i<k;i++){
        cout<<st[i];
    }
}

int main()
{
    vector<int> s{12,7,9,8};
    int k=s.size();
    insertionsort(s,k);
    
}