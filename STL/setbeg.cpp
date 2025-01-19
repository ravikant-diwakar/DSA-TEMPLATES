#include <iostream>
#include <set>
using namespace std;


//set only stores unique elements
//elements are arranged in sorted order


int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(7);

    s.insert(2);
    s.insert(6);
    s.insert(0);
    s.insert(1);

    for(auto i:s){
        cout<<i<<endl;

    }cout<<endl;

    set<int>:: iterator it=s.begin();
    it++;


    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;

    }cout<<endl;

    cout<<"-5 is present or not->"<<s.count(-5)<<endl;


    set<int>::iterator itr=s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }cout<<endl;


}
