#include <iostream>

using namespace std;


int modularexponentiation(int x,int y,int m){
    int res=1;
    while(y>0){
        if(y&1){
            //odd
            res=(1LL*(res)*(x)%m)%m;

        }
        x=(1LL*(x)%m*(x)%m)%m;
        y=y>>1;

    }
    return res;
}

int main()
{
    int a,b,m;
    cout<<"enter values of a,b and m";
    cin>>a>>b>>m;

    cout<<modularexponentiation(a,b,m);
    
    
}