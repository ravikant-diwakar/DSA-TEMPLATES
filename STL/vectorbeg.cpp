#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5,3);

    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }

    cout<<"second vector"<<endl;
    
    vector<int> a(v);

     for (int i=0;i<a.size();i++){
        cout<<a[i]<<endl;

    }



}
