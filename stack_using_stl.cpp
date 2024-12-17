# include<iostream>
# include<stack>
using namespace std;
int main(){
    stack<int> s;
    // pushing the element in the stack
    s.push(3);
    s.push(5);
    s.push(8);
    s.push(344);

    // popping the element from the stack
     s.pop();
     s.pop();
     cout<< "Printing the top element \n"<< s.top()<<endl;

     // for checking the stack is full or not
     if(s.empty()){
        cout<<"Stack is empty ";
     }
     else{
        cout<<"stack is not empty";
     }

    return 0;
}