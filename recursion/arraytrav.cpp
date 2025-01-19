#include <iostream>

using namespace std;

void print(int arr[],int n,int index){
    if(index>=n){
        return;
    }
    cout<<arr[index]<<endl;
    print(arr,n,index+1);



}
int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int index=0;
    print(arr,n,index);
}