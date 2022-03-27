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
class Node {
public:
    int data;
    Node *next;

};

 Node *head=NULL;
 Node *tail=NULL;

 void enqueue(int n)
 {
     Node *new_node=(Node *) malloc(sizeof(Node));
     new_node->data=n;
     new_node->next=NULL;
     if(head==NULL && tail== NULL)
     {
         head=new_node;
         tail=new_node;
         return;
     }

    tail->next=new_node;
    tail=new_node;



 }

 int dequeue()
 {
    Node *tmp=head;
     if(head==NULL)
     {
         cout << "queue is empty"<<endl;
         exit(1);

     }

     int n=head->data;
     head=head->next;
     free(tmp);
     return n;

 }

int main()
{
    enqueue(12);
    enqueue(22);
    enqueue(78);
    enqueue(92);
    enqueue(10);
    cout << dequeue()<<endl;
    cout << dequeue()<<endl;
    cout << dequeue()<<endl;
    cout << dequeue()<<endl;
    cout << dequeue()<<endl;
    cout << dequeue()<<endl;


return 0;
}
