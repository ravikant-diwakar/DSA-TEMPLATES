#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(7);
    v.push_back(0);
    v.push_back(6);
    v.push_back(3);


    cout<<"finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound->>"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound->>"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    string s="rash";

    cout<<"string before reversal-->"<<s<<endl;

    reverse(s.begin(),s.end());

    cout<<"string after reversal-->"<<s<<endl;


    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;


    
}
