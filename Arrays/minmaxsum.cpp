#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

//Given five positive integers, find the minimum and maximum values that can be calculated 
//by summing exactly four of the five integers.
// Then print the respective minimum and maximum values as a single line of two space-separated long integers.

void miniMaxSum(vector<int> arr) {
    int minVal=arr[0],maxval=arr[0];
    long long sum=0;
    for(int i=0;i<arr.size();i++){
        minVal=min(minVal,arr[i]);
        maxval=max(maxval,arr[i]);
        sum+=arr[i];
    }

    cout<<sum-maxval<<" "<<sum-minVal;
    
    


}

int main()
{
    vector<int> st{769082435,210437958,673982045,375809214,380564127};
    miniMaxSum(st);

}