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

void max_heapify(int *p, int heap_size,int i) // O(logn)
{
    int l=2*i,r=2*i+1,largest=i; //leftchid rightchild
    if(l<=heap_size && p[l]>p[largest])
       largest =l;
    if(r<=heap_size && p[r]>p[largest])
        largest =r;

    if(i!=largest)
    {

        swap(p[i],p[largest]);
        max_heapify(p,heap_size,largest);
    }





}

void build_max_heap(int *p,int heap_size) // O(nlogn)
{
    for (int i=heap_size/2;i>=1 ;i-- )
               max_heapify(p,heap_size,i) ;


}

void sort_max_heap(int *p,int heap_size) //O(nlog(n))
{
     for (int i=heap_size;i>1; i--)
     {

         swap(p[i],p[1]);

         heap_size--;
          max_heapify(p,heap_size,1);
     }
}

void print_max_heap(int *p,int heap_size)
{
    for (int i=1;i<=heap_size ; )
         cout<< p[i++]<<",";
         cout<<endl;


}
// extract max heap

int extract_max(int *p,int heap_size)
{
    int max_node=p[1];
    swap(p[heap_size],p[1]);
    heap_size--;

    max_heapify(p,heap_size,1);
return max_node;

}

int main()
{
    int a[]={0,12,2,13,56,78,89,3,67,109};
    int heap_size=9;
     print_max_heap(a,heap_size);
    build_max_heap(a,heap_size);
    print_max_heap(a,heap_size);
    //sort max heap
   // sort_max_heap(a,heap_size);
   // print_max_heap(a,heap_size);

    // extract max heap
    cout<< "priority value is \n";
    cout<<extract_max(a,heap_size)<<endl;




return 0;
}
