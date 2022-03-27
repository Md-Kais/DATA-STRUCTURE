
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
public:

    int data;
 Node *next;
};

Node *create_node( int item,Node *next)
{
    Node *new_node=(Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {

        cout<< "error\n";
        exit(1);
    }
   new_node->data=item;
   new_node->next=next;
   return new_node;

}

void print_link_list(Node *current_node )//node
{

     while(current_node!=NULL)
     {
            cout<< current_node->data<<",";
            current_node=current_node->next;
     }
  cout<<endl;
}

 Node *prepand( int item,Node *head )
 {
     return create_node(item,head);



 }

 Node *apand(int item ,Node *head)
 {
     Node *new_node=create_node(item,NULL);
       if(head==NULL)
       {
           return new_node;

       }

       Node *current_node=head;

       while(current_node->next!=NULL)
        current_node=current_node->next;
       current_node->next=new_node;
       return head;


 }

 Node *reference_(int item, Node *head)
 {
     Node *current_node =head;
     while(current_node->data!=item)
        current_node=current_node->next;
    return current_node;

 }

 void *insert_node(int item,Node *reference_node)
 {

     Node *new_node=create_node(item,reference_node->next);
     reference_node->next=new_node;



 }

 Node *remove_node( Node *node,Node *head)
 {
     if(head==node)
     {
           head=node->next;
        free(node);
        return head;
     }
     Node *current_node=head;

     while(current_node->next!=node)
        current_node=current_node->next;
     current_node->next=node->next;
     free(node);
     return head;

 }


 Node *reverse_linked_list(Node *head)
 {

     Node *prev_node=NULL;
     Node *current_node=head;
    Node *next_node= head;

        while(next_node!=NULL)
        {

            next_node=next_node->next;
            current_node->next=prev_node;
            prev_node=current_node;
            current_node=next_node;



        }


            head=prev_node;
            return head;
 }

int main()
{ Node *head,*n;
    head=n=create_node(12,NULL);
   print_link_list(head);
   head=prepand(14,head);
   head=prepand(19,head);
   head=prepand(18,head);
 print_link_list(head);

 head=apand(23,head);
 head=apand(73,head);

 print_link_list(head);

   head= reverse_linked_list(head);
   print_link_list(head);



return 0;
}

