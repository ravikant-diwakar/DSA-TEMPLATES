#include <iostream>
#include <vector>

using namespace std;

int pivotarr(vector<int> v){
    int start=0;
    int end=v.size()-1;
    int mid=start+((end-start))/2;
    
    while (start<end){
        
        if (v[mid]>=v[0]){
            start=mid+1;
        }
        else{
            end=mid;

        }

        mid= start + ((end-start)/2);

        

    }

    return mid;

}

int main(){
    vector<int> s{8,10,17,1,3};
    cout<<"pivot element:"<<pivotarr(s)<<endl;
}