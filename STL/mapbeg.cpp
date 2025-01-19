#include <iostream>
#include <map>


using namespace std;


int main()
{
    map<int,string> m;
    m[1]="Rashid";
    m[2]="Mazhar";
    m[13]="Rash";

    m.insert({5,"Tisha"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }cout<<endl;

    cout<<"check if -13 is present or not->>"<<m.count(-13)<<endl;

}