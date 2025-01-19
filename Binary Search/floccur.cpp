#include <iostream>
#include <vector>
using namespace std;


int firstocc(vector<int> arr,int n,int key){
    int start=0;
    int end=n-1;
    int mid= start+((end-start)/2);
    int ans=-1;

    while (start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;


        }
        else if (key>arr[mid]){
            start=mid+1;
        }

        else if (key<arr[mid]){
            end=mid-1;
            

        }
        mid=start+((end-start)/2);
    }

    return ans;

}

int lastocc(vector<int> arr,int n,int key){
    int start=0;
    int end=n-1;
    int mid= start+((end-start)/2);
    int ans=-1;

    while (start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;


        }
        else if (key>arr[mid]){
            start=mid+1;
        }

        else if (key<arr[mid]){
            end=mid-1;
            

        }
        mid=start+((end-start)/2);
    }

    return ans;

}



int main(){
    vector<int> s{1,2,3,3,3,3,3,3,3,1};
    int l=s.size()-1;
    int k;
    cout<<"enter element to search";
    cin>>k;
    cout<<"first occurence:"<<firstocc(s,l,k)<<endl;
    cout<<"last occurence:"<<lastocc(s,l,k)<<endl;
    cout<<"total no of occurence:"<<(lastocc(s,l,k)-firstocc(s,l,k))+1;
    return 0;


    
}