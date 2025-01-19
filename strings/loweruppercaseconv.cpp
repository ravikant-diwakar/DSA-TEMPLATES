#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;




char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;

    }
}

char touppercase(char ch){
    if(ch>='A' && ch<='B'){
        return ch;

    }
    else{
        char temp=ch-'a'+'A';
        return temp;
    }
}

int getlen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;

}


int main()
{
    char name;
    cout<<"enter first name"<<endl;
    cin>>name;
    cout<<tolowercase(name)<<endl;
    cout<<touppercase(name)<<endl;
}
