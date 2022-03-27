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
int n1,n2;
cin>>n1>>n2;
   Node *reference_node=reference_(n1,head);
   insert_node(n2,reference_node);
   print_link_list(head);

while(1)
{


   cin>>n1;
   reference_node=reference_(n1,head);
     head=remove_node(reference_node,head);
      print_link_list(head);

}



return 0;
}

