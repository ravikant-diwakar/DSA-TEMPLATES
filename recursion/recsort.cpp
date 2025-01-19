#include <iostream>
using namespace std;

bool isSorted(int *arr,int size){
    if(size==1 || size==0){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart=isSorted(arr+1,size-1);
        return remainingpart; 
    }
}

int main()
{
    int arr[5]={6,4,2,8,9};
    int size=5;
    
    bool ans=isSorted(arr,size);

    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

    return 0;
}