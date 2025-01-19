#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//replacing all the spaces with '@40'



string replacespace(string s,int n){
    string temp="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }

    }

    return temp;
}
int main()
{
    string s="my name is Rashid";
    int n=s.length();
    cout<<replacespace(s,n);

}