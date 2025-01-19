#include <iostream>
#include <vector>


using namespace std;


bool isPossible(vector<int> arr,int n,int m,int mid){
    int stdcount=1;
    int pagesum=0;
    for (int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }

        else{
            stdcount++;
            if(stdcount>m || arr[i]>mid){
                return false;
            }
            pagesum+=arr[i];
        }

    }
    return true;


}

int allocatebooks(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for (int i=0;i<n;i++){
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



int main()
{
    vector<int> s{10,20,30,40};
    int l=s.size()-1;
    int m;
    cout<<"enter no of students";
    cin>>m;
    cout<<"book allocation"<<allocatebooks(s,l,m);



}