#include <iostream>

using namespace std;

bool bsearch(int *arr,int s,int e,int key ){
    int mid=s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return true;

    }

    
    if(arr[mid]<key){
        return bsearch(arr,mid+1,e,key);

    }
    else{
        return bsearch(arr,s,mid-1,key);

    }
}

int main()
{
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=14;
    int s=0;
    bool ans=bsearch(arr,s,size,key);
    cout<<ans;

    return 0;

}