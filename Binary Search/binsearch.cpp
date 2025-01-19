#include <iostream>
#include <vector>
using namespace std;


//binary search time complexity 0(logn)



int linsearch(vector<int> v){
    int start=0;
    int end=v.size()-1;
    int mid=start+((end-start))/2;
    int key;
    cout<<"enter element to search";
    cin>>key;
    while (start<=end){
        if (v[mid]==key){
            cout<<"element found at position"<<mid;
            return mid;

        }
        else if (key>v[mid]){
            start=mid+1;
        }

        else if (key<v[mid]){
            end=mid-1;
            

        }
        mid=start+((end-start)/2);
    }
    cout<<"element not found";

    return 0;

}
int main(){
    vector<int> s{1,7,12,28,78};
    linsearch(s);

    
}