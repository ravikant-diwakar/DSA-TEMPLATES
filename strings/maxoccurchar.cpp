#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


char getmaxoccur(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(s[i]>='a' && s[i]<='z'){
            number=ch-'a';


        }
        else{
            number=ch-'A';

        }

        arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }


    }

    char finalans='a'+ans;
    return finalans;


}

int main()
{
    string s;
    cin>>s;
    cout<<getmaxoccur(s);
}