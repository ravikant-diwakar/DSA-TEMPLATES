#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

void findMax(int arr[],int n,int i,int &maxi){
    if(i>=n){
        return;
    }
    maxi=max(maxi,arr[i]);
    findMax(arr,n,i+1,maxi);



}

void findMin(int arr[],int n,int i,int &mini){
    if(i>=n){
        return;
    }
    mini=min(mini,arr[i]);
    findMin(arr,n,i+1,mini);



}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int i=0;
    int maxi=-1;
    int mini=100007;
    findMin(arr,n,i,mini);
    findMax(arr,n,i,maxi);
    cout<<maxi<<endl;
    cout<<mini<<endl;
}