#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int d){
        val=d;
        next=nullptr;
    }
};

class Queue{
private:
    Node* start;
    Node* end;
    int length;
public:
    Queue(){
        start=nullptr;
        end=nullptr;
        length=0;
    }

    void push(int x){
        length++;
        Node* newNode=new Node(x);
        if(start==nullptr and end==nullptr){
            start=newNode;
            end=newNode;
        }
        else{
            end->next=newNode;
            end=newNode;
        }
    }
    int pop(){
        if(start==nullptr){
            return -1;
        }
        int popedElement=start->val;
        Node* temp=start;
        start=start->next;
        delete temp;
        length--;
        return popedElement;
    }
    int top(){
        if(start==nullptr) return -1;
        return start->val;
    }

    bool size(){
        return length;
    }

    bool isEmpty(){
        return length==0;
    }
};
int main(){

    Queue *q=new Queue();
    q->push(2);
    q->push(3);
    q->push(5);
    q->push(4);

    while(!q->isEmpty()){
        cout<<q->top()<<" ";
        q->pop();
    }


}