#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


bool checkpal(char n[],int l){
    int s=0;
    int e=l-1;
    while(s<=e){
        if(n[s]!=n[e]){
            return false;
        }
        else{
            s++;
            e--;
            
        }

    }

    return true;
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
    char name[20];
    cout<<"enter first name"<<endl;
    cin>>name;
    int l=getlen(name);
    cout<<checkpal(name,l);


}