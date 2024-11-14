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

class Stack{
private:
    Node* head;
    int length;
public:
    Stack(){
        head=nullptr;
        length=0;
    }

    void push(int x){
        length++;

        Node* newNode=new Node(x);
        newNode->next=head;
        head=newNode;
    }

    int pop(){

        if(isEmpty()){
            cout<<"Stack is Empty ";
            return -1;
        }
        length--;
        int popedEle=head->val;
        Node* temp=head;
        head=head->next;
        delete temp;

        return popedEle;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty ";
            return -1;
        }
        else{
            return head->val;
        }
    }
    
    int size(){
        return length;
    }
    bool isEmpty(){
        return head==nullptr;
    }

};
int main(){

    Stack s;
    s.push(2);
    s.push(1);
    s.push(7);
    s.push(6);

    cout<<s.size()<<endl;

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }


}