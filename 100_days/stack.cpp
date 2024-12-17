# include<iostream>
# include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this-> size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack overflow " << endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout << "Stack underflow " << endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout << "Stack is empty " << endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(2);
    st.push(12);
    st.push(22);
    cout << st.peek() << endl;
    return 0;
}