#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void rotatearr(vector<int> nums,int k){
    vector<int> temp(nums.size());
    for (int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }

    nums=temp;

    for (int i=0;i<nums.size();i++){
        cout<<nums[i];
    }

}

int main()
{
    vector<int> st{1,2,3,4,5,6,7};
    int k;
    cout<<"enter no of elements to rotate:";
    cin>>k;
    rotatearr(st,k);
   
}