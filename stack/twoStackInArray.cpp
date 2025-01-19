#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#define ll long long
using namespace std;
 
class Stack{
    public:

    int *arr;
    int top1;
    int top2;
    int size;


    //constructor to create stack

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int x){
        if(top2-top1==1){
            //space not available
            cout<<"Overflow in stack 1"<<endl;
        }
        else{
            //space available
            arr[++top1]=x;
        }
    }

    void push2(int x){
        if(top2-top1==1){
            //space not available
            cout<<"Overflow in stack 2"<<endl;
        }
        else{
            //space available
            arr[--top2]=x;
        }
    }

    void pop1(){
        if(top1==-1){
            //stack is already empty
            cout<<"Underflow in stack 1"<<endl;
        }
        else{
            top1--;
             
        }
    }

    void pop2(){
        if(top2==-1){
            //stack is already empty
            cout<<"Underflow in stack 2"<<endl;
        }
        else{
            top2++;
             
        }
    }


    

};

 
 
int main()
{
    
    
}
