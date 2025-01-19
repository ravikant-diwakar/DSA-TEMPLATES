#include <iostream>

using namespace std;

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;

    int l1=mid-s+1;
    int l2=e-mid;


    int *left=new int[l1];
    int *right=new int[l2];

    int k=s;
    for(int i=0;i<l1;i++){
        left[i]=arr[k];
        k++;

    }


    k=mid+1;
    for(int j=0;j<l2;j++){
        right[j]=arr[k];
        k++;
    }

    //merge Logic

    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=s;

    while(leftIndex<l1 && rightIndex<l2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex++]=left[leftIndex++];
         
        }
        else{
            arr[mainIndex++]=right[rightIndex++];
        
        }
        
    }

    //copy logic for left array
    while(leftIndex<l1){
        arr[mainIndex++]=left[leftIndex++];
    }

    while(rightIndex<l2){
        arr[mainIndex++]=right[rightIndex++];
    }


}

void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

int main(){
    int arr[]={4,5,13,2,12};
    int n=5;
    int s=0;
    int e=n-1;
    cout<<"array before sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,s,e);

    cout<<"array after sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}