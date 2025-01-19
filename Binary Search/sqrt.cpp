//sqaureroot using binary search

#include <iostream>
#include <vector>

using namespace std;

long long int bsearch(int n){
    int s=0;
    int e=n;
    long long int mid = s + (e-s)/2;
    int ans=0;
    while (s<=e){
        long long int square=mid*mid;
        if (square==n){
            return mid;
        }
        else if(square>n){
            
            e=mid-1;


        }

        else if (square<n){
            ans=mid;
            s=mid+1;
        }

        mid= s+ (e-s)/2;
    }
    return ans;


}

int sqrt(int x){
    return bsearch(x);
}

//square root with precision points

double moreprecision(int n,int precision,int temp){
    double factor=1;
    double ans=temp;
    for (int i=0;i<precision;i++){
        factor=factor/10;
        for (double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }

    return ans;
}


int main(){
    int x;
    cout<<"enter number";
    cin>>x;
    cout<<"square root:"<<sqrt(x)<<endl;
    int tempsol=sqrt(x);
    cout<<"square root after precision:"<<moreprecision(x,2,tempsol);

}