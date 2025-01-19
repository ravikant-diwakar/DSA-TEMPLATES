#include <iostream>
using namespace std;



void swapalt(int num[],int n){
    for(int i=0;i<=n;i+=2){
        if(i+1<n){
            swap(num[i],num[i+1]);

        }
        
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    swapalt(arr,5);

    cout<<"swapped array is";


    for (int i=0;i<5;i++){
        cout<<arr[i];

    }
}