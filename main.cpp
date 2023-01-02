#include <iostream>

using namespace std;
const int Max_size=100;
class stack{
    int top;
    int  item=[Max_size];
public:
     stack(){
         top=-1;
     }
void push(int element){
    if (top>=Max_size-1){
        cout<<"stack is full"<<endl;

    }else{
        top++;
        item[top]=element;
    }

}bool isEmpty(){
    if (top==-1)
        return true;
    else
        return false;

}
void pop(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;

    }else{
        top--;

    }
}void gettop(int&element){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;

    }else{
        gettop=item[top];


    }
}void print(){
    for[int i=top;i>=0;i--]{
        cout<<item[i]<<endl;
    }

}




};


int main()
{
   stack s;
   s.push(5);
   s.print();
    return 0;
}
