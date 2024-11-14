#include<bits/stdc++.h>
using namespace std;

//Queue Implementation using Arrays

class Queue{
private:
    int start;
    int end;
    int curElements;
    int length;
    int *arr;
public:
    Queue(){
        start=-1;
        end=-1;
        curElements=0;
        length=5;
        arr=new int[length];
    }

    void push(int x){
        if(curElements<=length){
            if(start==-1){
                start+=1;
                end+=1;

            }
            else end=(end+1)%length;
            arr[end]=x;
            curElements+=1;
        }
        else {
            cout<<"Queue Overflow"<<endl;
        }
    }

    int pop(){
        if(curElements==0){
            cout<<"Queue is Empty ";
            return -1;
        }
        
        int popedElement=arr[start];
        if(curElements==1){
            start=-1;
            end=-1;
        }
        else start=(start+1)%length;
        curElements-=1;
        return popedElement;
    }

    int top(){
        if(curElements==0){
            cout<<"Queue is Empty ";
            return -1;
        }
        return arr[start];
    }

    int size(){
        return curElements;
    }
    bool isEmpty(){
        return curElements==0;
    }

};
int main(){

    Queue *q=new Queue();
    q->push(2);
    q->push(7);
    q->push(1);
    q->push(10);
    q->push(7);

    while(!q->isEmpty()){
        cout<<q->top()<<" ";
        q->pop();
    }
    q->top();
    


    

}