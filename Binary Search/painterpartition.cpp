#include <iostream>
#include <vector>

using namespace std;


bool isPossible(vector<int> arr,int n,int m,int mid){
    int pcount=0;
    int parea=0;
    for (int i=0;i<n;i++){
        if (parea+arr[i]<=mid){
            parea+=arr[i];
        }
        else{
            pcount++;
            if(pcount>m || arr[i]>mid){
                return false;
            }
            parea+=arr[i];
            
        }
    }

    return true;
}

int partition(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    int e=sum;
    int mid= s+(e-s)/2;
    int ans=-1;

    while (s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }

        mid= s+(e-s)/2;

    }

    return ans;
}


int main(){
    vector<int> s{5,5,5,5};
    int l=s.size()-1;
    int m;
    cout<<"Enter no of painters";
    cin>>m;
    cout<<"Partition for painters"<<partition(s,l,m);


}