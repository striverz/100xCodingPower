#include<bits/stdc++.h>
using namespace std;

//put stack1 elements to stack2
//put x in stack1
//again put all stack2 elements in stack1
class Queue{
private:
    stack<int>st1,st2;
public:
    void push(int x){

        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }

    }

    int pop(){
        int val=st1.top();
        st1.pop();
        return val;
    }

    int top(){
        return st1.top();
    }
    bool empty(){
        return st1.empty();
    }
};
int main(){

    Queue *q=new Queue();
    q->push(2);
    q->push(1);
    q->push(4);
    q->push(5);

    while(!q->empty()){
        cout<<q->top()<<" ";
        q->pop();
    }

}