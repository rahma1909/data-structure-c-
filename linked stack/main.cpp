
#include <iostream>
using namespace std;
template<class t>

class stack{
    struct node{
        t item;
         node*next;
    };
    node*top;
    node*cur=NULL;
public:
    stack(){
        top=NULL;
    }
    void push(t Element)
    {

             node*newElementptr=new node;
             newElementptr->item=Element;
             newElementptr->next=top;
             top=newElementptr;

    }
    bool isEmpty()
    {
        if(top==NULL )
            return true;
        else
            return false;
    }
    void pop()
    {
        if(isEmpty())
            cout<<"stack is empty can not pop any element"<<endl;
        else
            {
                node*temp=new node;
                temp=top;
               top= top->next;
                delete temp;
            }
    }
    void gettop(t&stacktop)
    {
        if(isEmpty())
            cout<<"stack is empty can not pop any element"<<endl;
        else
            {
              cout<<top->item ;
            }
    }
    void display()
    {

        cur=top;
        cout<<"[";
        while(cur!=NULL){
            cout<<cur->item<<",";
          cur=  cur->next;
        }
        cout<<"]"<<endl;
    }
};
int main()
{
    stack<float>s;
   s.push(5);
   s.push(10);
   s.push(20);
   //s.pop();
   s.display();
   float x=0;
   s.gettop(x);
   cout<<x<<endl;




    return 0;
}
