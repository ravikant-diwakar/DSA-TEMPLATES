#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


bool ispossible(vector<int> st,int k,int mid){
    int cowcount=1;
    int lastpos=st[0];
    for(int i=0;i<st.size();i++){
        if(st[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;

            }
            lastpos=st[i];
            

        }
    }
    return false;


}

int agressivecows(vector<int> st,int k){
    sort(st.begin(),st.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<st.size();i++){
        maxi=max(maxi,st[i]);

    }

    int e=maxi;
    int ans=-1;

    int mid= s + (e-s)/2;

    while(s<=e){
        if(ispossible(st,k,mid)){
            ans=mid;
            s=mid+1;

        }

        else{
            e=mid-1;

        }

        mid= s+(e-s)/2;

    }

    return ans;


}



int main()
{
    vector<int> s{0,3,4,7,10,9};
    int k;
    cout<<"enter no of cows";
    cin>>k;
    cout<<"solution"<<agressivecows(s,k);

}
