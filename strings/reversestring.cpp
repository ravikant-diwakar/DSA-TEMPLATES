#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void reverse(char n[],int l){
    int s=0;
    int e=l-1;
    int mid=s+(e-s)/2;
    while(s<e){
        swap(n[s],n[e]);
        s++;
        e--;
        
        

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
    char name[20];
    cout<<"enter first name"<<endl;
    cin>>name;
    int l=getlen(name);
    reverse(name,l);
    cout<<name;
   
    
}