#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;

     stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top >=0){
            return arr[top];
        }
        cout<<"Stack is empty"<<endl;
    }
    bool isEmpty(){
        if(top<0){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    st.push(21);
    st.push(9);
    st.push(25);

    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"sack is not empty"<<endl;
    }
    return 0;
}