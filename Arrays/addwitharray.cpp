#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void addarr(vector<int> a1,int k,vector<int> a2,int n){
    vector<int> a3;
    int i=k-1;
    int j=n-1;
    int carry=0;

    //case when the element is present in both the index
    while(i>=0 && j>=0){
        int sum=a1[i]+a2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        a3.push_back(sum);
        i--;
        j--;

    }

    //case when the second array doesnt have an element in particular index
    while(i>=0){
        int sum=a1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        a3.push_back(sum);
        i--;


    }

    //case when the first array doesnt have an element in particular index
    while(j>=0){
        int sum=a1[j]+carry;
        carry=sum/10;
        sum=sum%10;
        a3.push_back(sum);
        j--;

    }

    while (carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        a3.push_back(sum);
       


    }
    reverse(a3.begin(),a3.end());
    for(int i=0;i<a3.size();i++){
        cout<<a3[i]<<" ";
    }

}

int main()
{
    vector<int> s1{1,2,3,4};
    int k=s1.size();
    vector<int> s2{6};
    int n=s2.size();
    addarr(s1,k,s2,n);
}