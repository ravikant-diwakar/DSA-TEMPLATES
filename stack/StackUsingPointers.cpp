#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
using namespace std;
 
 
class Stack{
    public:

    int *arr;
    int top;
    int size;


    //constructor to create stack

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int x){
        if(size-top>1){
            //space available 
            //insert element
            arr[++top]=x;

        }
        else{
            //space not available
            cout<<"Overflow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty cant delete"<<endl;
        }
        else{
            top--;

        }


    }


    //get the top element of the stack
    int getTop(){
        if(top==-1){
            cout<<"Cannot get top stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }


    //return valid elements in the stack
    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }


};

 
 
int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);


    while(!s.isEmpty()){
        cout<<s.getTop()<<endl;
        s.pop();
    }

    cout<<s.getSize()<<endl;


    
}
