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

 class Node
 {
 public:
    int data;
    Node *next;

 };

 Node *create_node( int n,Node *next)
 {
     Node *new_node= (Node *) malloc(sizeof(Node));
     new_node->data=n;
     new_node->next=next;
     return new_node;
 }
  Node *head=NULL;
Node *Insert(int n,Node *head)
 {
     Node *new_node= create_node(n,NULL);
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

 void disply(Node *head)
 {
     Node *current_node=head;
     while(current_node!=NULL)
     {

         cout<< current_node->data << ",";
         current_node=current_node->next;
     }

     cout<<endl;

 }

int main()
{
  head=Insert(12,head);
  head=Insert(78,head);
  head=Insert(87,head);
  head=Insert(16,head);
  head=Insert(16,head);
  head=Insert(19,head);
  disply(head);



return 0;
}
