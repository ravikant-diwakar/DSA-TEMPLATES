#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
using namespace std;
 


int getQuotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }

    return ans;
}
void solve(){}
 
 
int main()
{

    int divisor=7;
    int dividend=-29;
    if(divisor==0){
        cout<<"final answer is:"<<dividend;
        return 0;
    }
    int ans=getQuotient(abs(divisor),abs(dividend));

    

    if((dividend>0 && divisor<0) || (dividend<0 && divisor>0) ){
        ans=-ans;
    }
    

    cout<<"final answer is:"<<ans;
    
    
}
