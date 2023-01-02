#include <iostream>
#include <cassert>
using namespace std;
class queue{
    struct node{
        int item;
       node *next;
    };
    node*frontptr;
    node*rearptr;
    int length;
public:
    queue()
    {
        frontptr=rearptr=NULL;
        int length=0;
    }
    bool isEmpty()
    {
        if(rearptr==NULL)
            return true;
        else
        return false;
    }
    void enqueue(int element)
    {
        if (isEmpty())
            {
                frontptr=new node;
                frontptr->item=element;
                frontptr->next=NULL;
                rearptr=frontptr;
                length++;

         }else
         {
             node*newptr=new node;
             newptr->item=element;
             newptr->next=NULL;
             rearptr->next=newptr;
             rearptr=newptr;
             length++;
         }
    }
    void dequeue()
    {
        if(isEmpty())
            {
                cout<<"queue is empty can not dequeue"<<endl;

        }else
        {
            node*tempptr=frontptr;
        }if(frontptr==rearptr){
            frontptr=NULL;
            rearptr=NULL;
        }else
        {    node*tempptr=frontptr;
            frontptr=frontptr->next;
            tempptr->next=NULL;
            delete tempptr;
        }
    }int getfront()
    {
        assert(!isEmpty());
        return frontptr->item;
    }


    int getrear()
    {
        assert(!isEmpty());
        return rearptr->item;
    }

    void display()
    {
       node*cur=frontptr;
       cout<<"[";
       while(cur!=NULL) {
        cout<<cur->item<<",";
        cur=cur->next;

       }
 cout<<"]";
    }

    void clearqueue(){
        node*cur;
        while(frontptr!=NULL){
            cur=frontptr;
            frontptr=frontptr->next;

            delete cur;
        }
        rearptr=NULL;
    }


};
int main()
{
   queue q;
   q.enqueue(100);
   q.enqueue(200);
   q.enqueue(300);
   q.getfront();
   q.display();

    return 0;
}
