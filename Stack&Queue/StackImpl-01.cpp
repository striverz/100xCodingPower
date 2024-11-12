#include<bits/stdc++.h>
using namespace std;

//Stack Implementation Using Arrays

class Stack{
private:

    int top=-1;
    vector<int>st; //a stack of size 10

public:

    Stack(int size){
        st.resize(size);
    }

    void push(int x){
        if(top+1==st.size()){
            cout<<"Stack Overflow";
        }
        else{
            top+=1;
           st[top]=x;
        }  
    }

    void pop(){
        if(top>=0) top-=1;
        else cout<<"Stack Underflow";
    }

    int peek(){
        if(top>=0){
            return st[top];
        }
        else{
            cout<<"Stack is empty ";
            return -1;
        }
    }

    int size(){
        return top+1;
    }

    bool empty(){
        return top==-1;
    }

};
int main(){

    Stack st(10); //defaultly initializing the stack size

    

    st.push(2);
    st.push(4);
    st.push(1);
    st.push(56);
    st.push(6);
    st.push(5);
    st.push(9);
    st.push(1);

    while(!st.empty()){
        cout<<st.peek()<<" ";
        st.pop();
    }
    
   
     


}