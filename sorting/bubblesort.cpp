#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


void Bubblesort(vector<int> st,int k){
    for(int i=1;i<k;i++){
        bool swapped=false;
        for(int j=0;j<k-i;k++){
            if (st[j]>st[j+1]){
                swap(st[j],st[j+1]);
                swapped=true;
            }
        }

        if(swapped==false){
            break;

        }

    }

     for(int i=0;i<k;i++){
        cout<<st[i];
    }


}


int main()
{
    vector<int> s{12,7,9,8};
    int k=s.size();
    Bubblesort(s,k);

    return 0;

    
    
   

}
