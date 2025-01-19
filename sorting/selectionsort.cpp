#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void Selectionsort(vector<int> s,int k){
    
    for(int i=0;i<k;i++){
        int minindex=i;
        for(int j=i+1;j<k;j++){
            if(s[minindex]>s[j]){
                minindex=j;
            }

        }

        swap(s[minindex],s[i]);



    }

    for(int i=0;i<k;i++){
        cout<<s[i];
    }




}


int main()
{
    vector<int> s{12,7,9,8};
    int k=s.size();
    Selectionsort(s,k);
    
    
   

}
