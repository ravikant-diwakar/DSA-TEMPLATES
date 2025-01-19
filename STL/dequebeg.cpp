#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout<<"size before erase"<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);

    cout<<"size after erase"<<d.size()<<endl;

    //for each loop
    for (int i:d){
        cout<<i<<endl;
    }

}