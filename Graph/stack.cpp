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
#define Size 5

/*
class Stack{
    public:
int a[Size];
int top;

};

 void push(int item,Stack *a){

     if(a->top==Size)
     {
         cout<< "Stack is full"<<endl;
         return;
     }
      a->a[a->top]=item;
       a->top++;
 }

 int pop(Stack *a)
 {

     (a->top)--;
     if(a->top<0)
     {
         cout<< "stack is empty";

     }

     return a->a[a->top];
 } */

 class Node{
 public:
 int data;
 Node *next;

 };

Node *top=NULL;

 Node *create_node(int data,Node *next)
 {
      Node *new_node = (Node *) malloc(sizeof(Node));
         new_node->data=data;
         new_node->next=next;
         return new_node;

 }

void push(int item)
 {
     top=create_node(item,top);
     //tcout<<top<<endl;
      //return top;
 }

 int pop()
 {
     if(top==NULL)
        cout<<"stack is empty"<<endl;
      int n=top->data;
      top=top->next;
      return n;



 }



int main()
{

    //cout<<top<<endl;
    push(30);
   // cout<<top<<endl;
     push(70);
     push(90);
    push(20);
     push(10);

    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();
    cout<<pop();



return 0;
}
