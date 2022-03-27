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


class Stack
{
public:

    int data;
    Stack *next;

};

Stack *top=NULL;
/*class Node
{
public:
    int data;
    Node *next;

}; */

void push(int n)
{
    Stack *new_node=(Stack *) malloc(sizeof(Stack));
    if(new_node==NULL)
        cout<< "fcmkdckjdfoi" ;
    new_node->data=n;
    new_node->next=top;
    top=new_node;



}

int pop()
{
    if(top==NULL)
    {
        cout<< "stack is empty"<<endl;
       exit(1);
    }
Stack *tmp=top;
int n=tmp->data;

 top=top->next;

  free(tmp);
  return n;


}
int main()
{
    //int n;
   // cin>>n;
    push(89);
    push(12);
    push(19);
    push(87);
    push(43);
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;
  cout<<  pop()<<endl;



    return 0;
}
