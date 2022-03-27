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
#define max_size 100
#define initial 1
#define waiting 2
#define visited 3



int adj[100][100]; //adjecency matrics
int state[100];
int n;
class Queue{
    public:
   int data[max_size+1];
 int head;
 int tail;


};



void enqueue(Queue *Q,int a)
{
 // cout<< a <<endl;
    if((Q->tail+1)%(max_size+1)==Q->head)
    {
        cout<< "Queue is full";
        return;
    }


    Q->data[Q->tail]=a;
    Q->tail=( Q->tail+1)%(max_size+1);

}




int dequeue(Queue *Q)
{
    if(Q->head==Q->tail)
    {
        return 0;
    }

    int a=Q->data[Q->head];
    Q->head=(Q->head+1)%(max_size+1);
    return a;

}







 void BFS(int v)
 {

     Queue Q;
       Q.head=0;
       Q.tail=0;

      enqueue(&Q,v);
      state[v]=waiting;
      while(Q.tail!=Q.head)
      {
          v=dequeue(&Q);
          cout<< v<< ",";
          state[v]=visited;
           for (int i=0; i<n;i++ )
           {
                //cout<< state[i]<< ","<<" "<<adj[v][i]<<endl;
               if(state[i]==initial && adj[v][i]==1)
               {
                   enqueue(&Q,i);
                   state[i]=waiting;

               }
           }


      }

   cout<< endl;
 }


void create_graph();
void BF_traverse()
{ int v;
    for (int v=0; v<n;v++ )
        state[v]=initial;

    cout << "Enter source node"<<endl;
    cin>> v;
    BFS(v);


}



int main()
{

   /* Queue Q;
    Q.head=0;
    Q.tail=0;
    enqueue(&Q,12);
    cout<< dequeue(&Q); */
   create_graph();

 BF_traverse();


return 0;
}



void create_graph()
{
    cout<< "enter number of node"<<endl;
      cin>>n;

    int  i,max_edges,origin,destination;
    max_edges=n*(n-1);

    for (int i=0; i<max_edges;i++ )
    {
         cout<< "Enter the origin and destination (if skip type -1 -1) of node"<<endl;
         cin>> origin>> destination;
         if(origin==-1&&destination==-1) break;
         if(origin<0 || destination<0 || origin>=n || destination>=n)
         {
             cout << "you have enter wrong input"<<endl;
             i--;
             continue;
         }

        adj[origin][destination]=1;
        adj[destination][origin]=1;
    }




}
