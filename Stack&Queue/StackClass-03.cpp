#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
    queue<int>q;
public:

    void push(int x){
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        

    }
    int pop(){
        int val=q.front();
        q.pop();
        return val;
    }
    int top(){
        return q.front();
    }
    int size(){
        return q.size();

    }
    bool isEmpty(){
        return q.empty();
    }

};
int main(){

    Stack s;
    s.push(2);
    s.push(4);
    s.push(8);
    s.push(1);
    s.push(10);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}