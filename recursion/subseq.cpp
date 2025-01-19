#include <iostream>
#include <string>

using namespace std;


void printSubSeq(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    } 
    //exclude
    printSubSeq(str,output,i+1);

    //include
    output.push_back(str[i]);
    printSubSeq(str,output,i+1);

}

int main(){
    string str;
    cin>>str;
    string output;
    int i=0;
    printSubSeq(str,output,i);

}