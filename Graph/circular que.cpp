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
class Queue{
public:
    int data[Size+1];
    int head;
    int tail;

};
void enqueue(Queue *q,int item)
{
    if(q->head==(q->tail+1)%(Size+1))
       {
            cout<< "stack is full"<<endl;
            return;
       }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Size+1);


}

int dequeue(Queue *q)
{
    if(q->tail==q->head)
    {
        cout<< "stack is empty";
        cout<<endl;
    }

    int n=q->data[q->head];
   // cout<<n<<endl;
    q->head=(q->head+1)%(Size+1);
    return n;
}


int main()
{
    Queue q;
      q.head=0;
      q.tail=0;
      enqueue(&q,454);
      enqueue(&q,34);
      enqueue(&q,64);
      enqueue(&q,54);
      enqueue(&q,45);
      enqueue(&q,254);

      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;
      cout<< dequeue(&q)<<endl;









return 0;
}
