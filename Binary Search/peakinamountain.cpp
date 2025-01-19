#include <iostream>
#include <vector>

using namespace std;

int peakindex(vector<int> v,int n){
    int s=0;
    int e=n-1;
    int mid= s + (e-s)/2;
    while (s<e){
        if(v[mid]<v[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }

        mid= s + (e-s)/2;

        

    }

    return s;

}



int main()
{
    vector<int> s{0,10,5,2};
    int l=s.size();
    cout<<"peak index in a mountain:"<<peakindex(s,l);
    cout<<""
}