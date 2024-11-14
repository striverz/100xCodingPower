//Implementation of stack using arrays
//Pattern-01

#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int length;
    vector<int>arr;
    int topPointer=-1;

public:
    Stack(){
        length=7; //defaultly setting the size as 7
        arr.resize(length);
    }

    void push(int ele){
        if(topPointer+1==length){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            topPointer+=1;
            arr[topPointer]=ele;
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty ";
            return -1;
        }
        int topedEle=arr[topPointer];
        topPointer-=1;
        return topedEle;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty ";
            return -1;
        }
        return arr[topPointer];
    }

    int size(){
        return topPointer+1;
    }

    bool isEmpty(){
        return topPointer==-1;
    }



};
int main(){
    Stack s;

    s.push(2);
    s.push(3);
    s.push(7);
    s.push(5);
    s.pop();

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}