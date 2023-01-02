#include <iostream>

using namespace std;
class linkedlist{
    struct node{
        int item;
        node*next;
        };
public:
     linkedlist(){
         first=tail=NULL;
         length=0;
     }bool isEmpty()
     {
         if (first==NULL)
            return true;

         else
            return false;

         }void insertitem(int element){
             node*newnode=new node;
             newnode->item=element;
             if(first==NULL)
                {
                    first=tail=newnode;
                    newnode->next=NULL;
             }
             else
             {
               newnode->next=first;
               fisrt=newnode;
             }length++;


         }void insertlast(int element)
         {
             node*newnode=new node;
             newnode->item=element;
             if(length==0){
                first=tail=newnode;
                newnode->next=NULL;
             }else
             {
             tail->next=newnode;
              newnode->next=NULL;
              tail=newnode;
             }
         }
     }

};
int main()
{

    return 0;
}
