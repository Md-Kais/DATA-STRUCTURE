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
#define queue_size 5

class my_queue{
public:
    int a[queue_size+1];
    int head;
    int tail;


};

void enqueue (my_queue *p,int value)
{
    if((p->tail+1)%(queue_size+1)==p->head)
    {
        cout<< "queue is full"<<endl;
        return;
    }

    p->a[p->tail]= value;
    p->tail=(p->tail+1)%(queue_size+1);


}

int dequeue(my_queue *p)
{

    if(p->head==p->tail)
    {
        cout<< "queue is empty";
        return -1;
    }
   int a=p->a[p->head];
   p->head=(p->head+1) %(queue_size+1);
   return a;
}



int main()
{
    my_queue q;
    q.head=0;
    q.tail=0;

    enqueue(&q,10);
    enqueue(&q,14);
    enqueue(&q,10);
    enqueue(&q,16);
    enqueue(&q,12);
    enqueue(&q,12);
    enqueue(&q,12);
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;






return 0;
}
