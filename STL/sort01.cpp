#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> s{0,1,1,0,1,0,0,1};
    int l=s.size();
    int i=0,j=l-1;
    while(i<j){
        while (s[i]==0 && i<j){
            i++;
        }
        while (s[j]==1 && i<j){
            j--;
        }

        

        swap(s[i],s[j]);
        i++;
        j--;
    }
        

        

    cout<<"sorted array";
    for (int i=0;i<l;i++){
        cout<<s[i];

    }
}