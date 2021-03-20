#include <bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   node *next;    
    
};

node* head=NULL;


void insert(int n)
{
   node* new_node = new node();
   (*new_node).data=n;
   (*new_node).next= head;
   head=new_node;   
    
}

void display()
{
   node* ptr;
   ptr=head;
   while(ptr!=NULL)
   {
      cout<<(*ptr).data<<endl;
      ptr=(*ptr).next;    
   }
    
    
}

void reversed()
{
   node *p,*c,*k;
   p=NULL;
   c=head;

   while(c!=NULL)
   {
       k=(*c).next;
       (*c).next=p;
       p=c;
       c=k;
          
       
   }
   head=p;
   
    
    
    
}


int main()
{
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   display();
   cout<<endl;
   reversed();
   cout<<endl;
   display();
   
   return 0;
    
    
}