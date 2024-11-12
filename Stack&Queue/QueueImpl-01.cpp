#include<bits/stdc++.h>
using namespace std;
class Queue{
private:
    int curSize=0,start=-1,end=-1;
    vector<int>q;
    
public:

    Queue(int size){
        q.resize(size);
    }

    void push(int x){
        if(curSize==q.size()){
            cout<<"Queue Overflow";
            return;
        } 
        if(curSize==0){
            start=0;
            end=0;
        }
        else{
            end=(end+1)%q.size();
        }
        q[end]=x;
        curSize+=1;
    }

    void pop(){
        if(curSize==0){
            cout<<"No Elements in the Queue";
            return;
        }

        if(curSize==1){
            start=-1;
            end=-1;

        }
        else{
            start=(start+1)%q.size();
        }
        curSize-=1;
    }

    int peek(){
        if(curSize==0) {
            cout<<"No elements in the Queue ";
            return -1;
        }
        else{
            return q[start];

        }
    }

    bool empty(){
        return curSize==0;
    }
    int size(){
        return curSize;
    }

};

int main(){

    Queue q(5);

    q.push(1);
    q.push(4);
    q.push(3);
    q.push(100);
    q.push(5);

    cout<<q.size()<<endl;
 
    while(!q.empty()){
        cout<<q.peek()<<" ";
        q.pop();
    }
   


}