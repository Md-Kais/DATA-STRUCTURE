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

Node *create_node(int item,Node *next)
{

    Node *new_node= (Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {

        cout<< "error"<<endl;
       //exit("error plus");
    }
  new_node->data=item;
  new_node->next=next;
  return new_node;

}

Node *apand(int item,Node *head)
{
     Node *new_node= create_node(item,NULL);
     if(head==NULL)
        return new_node;
        Node *current_node=head;
        while(current_node->next!=NULL)
            current_node=current_node->next;
        current_node->next=new_node;
     return head;

}

void print_link_list(Node *head)
 {
      Node *current_node=head;
      while(current_node!=NULL)
      {
          cout<<current_node->data<<" ,";
          current_node=current_node->next;
      }
     cout<<endl;
 }

Node *prepand(int item,Node *head)
{
    head=create_node(item,head);
    return head;
}

Node *remove_node(Node *node,Node *head)
{

    if(node ==head)
    {
        head=node->next;

    }
    else{ Node *current_node=head;


        while(current_node->next!=node)
            current_node=current_node->next;
        current_node->next=node->next;

    }

    free(node);
    return head;
}

void insert_node(int item,Node *head,Node *reference_node)
{
    //Node *current_node=head;
   // while(current_node!=reference_node)
        //current_node=current_node->next;
    Node *new_node=create_node(item,reference_node->next);
    reference_node->next=new_node;




}

int main()
{  Node *head=NULL;
head=apand(5,head);
head=apand(34,head);
head=apand(59,head);
head=apand(53,head);

head=prepand(56,head);
head=prepand(522,head);
Node *n1=head;
head=prepand(886,head);
head=prepand(0,head);

  print_link_list(head);

  // head=remove_node(n1,head);
  // print_link_list(head);

   insert_node(1234,head,n1);
   print_link_list(head);





return 0;
}
