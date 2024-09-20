//implementation of stack using array
#include<iostream>
using namespace std;

class stack{

public:

int top;
int arr[100];

public:
stack(){
    top=-1; // taking top of the stack initially -1
}

void push(int data){
    if(top>=99){
        cout<<"stack overflow , not able to inserted"<<endl;
    }
    else{
        top++;
        arr[top]=data;
        cout<<data<<" "<<"pushed into stack"<<endl;
    }

}


void pop(){
    //when top=-1 means stack is empty , hence there is nothing to pop
if(top==-1){
    cout<<"unable to pop"<<endl;
}
//decrementing top to pop
else{
    top--;
}
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<arr[i];
    }
}

};

int main(){
stack s1;
s1.push(5);
s1.push(6);
s1.push(7);
s1.push(8);
s1.print();
cout<<endl;
s1.pop();
s1.print();
return 0;
}