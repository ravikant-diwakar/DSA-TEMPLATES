#include <iostream>
#include <array>


using namespace std;

int main()
{
    array<int,4> a={1,2,3,4};
    int size=a.size();

    cout<<"element at second index:"<<a.at(2)<<endl;
    cout<<"element at front position:"<<a.front()<<endl;
    cout<<"Element at last position:"<<a.end()<<endl;
    cout<<"empty or not:"<<a.empty()<<endl;

}