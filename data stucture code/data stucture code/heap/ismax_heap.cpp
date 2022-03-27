
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

int left(int i)
{
    return  2*i;
}


int right(int i)
{
    return 2*i+1;
}

int parent(int i)
{
    return i/2;
}


int ismaxhip(int *a,int array_size)
{
    for (int i=array_size; i>1;i-- )
    {

        if(a[i]>a[parent(i)])
        {
          //cout  << i<< " "<< a[i]<< " " << l<< " "<<a[l]<< " " << r<< " "<<a[r]<< " "<<endl;
            return 0;

        }

    }


    return 1;

}

void max_heapify(int *a,int heap_size,int i)
{
    int l=left(i);
    int r=right(i);
    int largest=i;
    if(l<=heap_size && a[l]>a[largest])
        largest =l;
    if(r<=heap_size && a[r]>a[largest])
        largest =r;
    if(largest==i)
        return;

    swap(a[i],a[largest]);
    max_heapify(a,heap_size,largest);


}


void  build_max_heap(int *a,int Size)
{

    for(int i=Size/2; i>=1; i--)
    {
        max_heapify(a,Size,i);

    }


}

void print_heap(int *a, int heap_size)
{

    for (int i=1; i<=heap_size; i++ )
    {
        cout<< a[i]<< ",";
    }
    cout<<endl;


}

void heap_sort(int *a,int heap_size)
{
    for (int i=heap_size; i>1;i-- )
    {
        swap(a[1],a[heap_size]);
        heap_size--;
        max_heapify(a,heap_size,1);
    }



}


int get_max_value (int *a)
{
    return a[1];
}

int extract_max_heap(int *a,int heap_size)
{
   int max_value =a[1];
   swap(a[1],a[heap_size]);
   heap_size--;
   max_heapify(a,heap_size,1);

    return max_value;

}


void insert_max_heap(int *a,int value,int *heap_size)
{
    (*heap_size)++;
  //  cout<<*heap_size<<endl;
    a[*heap_size]=value;
    int i=*heap_size;
   while(i>1 && a[i]>a[parent(i)])
   {
       swap(a[i],a[parent(i)]);
       i=parent(i);
   }


}

void increase_key(int *a,int index,int value)
{
    a[index]=value;
    int i=index;
    while(i>1 && a[i]>a[parent(i) ])
    {
        swap(a[i],a[parent(i)] );
        i=parent(i);
    }

}

int main()
{
    int   h1[]= { 0,19,7,12,3,5,12,17,10,1,2};
int heap_size=10;
    int n=ismaxhip(h1,heap_size);
     print_heap(h1,heap_size);

    if(n)
    {
        cout << "Yes this is max heap\n";


    }
    else
    {
          cout << "Yes this is not max heap\n";;

    }

build_max_heap(h1,heap_size);
print_heap(h1,heap_size);

n=ismaxhip(h1,heap_size);

    if(n)
    {
        cout << " this is max heap\n";

    }
    else
    {  cout << "this is not max heap\n";
    }

  //heap_sort(h1,heap_size);
 // print_heap(h1,heap_size);
  cout<< "extract max_heap"<<endl;

  cout << extract_max_heap(h1,heap_size)<<endl;

  cout << " insert into heap"<<endl;
   int   a[30]= { 0,19,7,12,3,5,12,17,10,1,2};
     heap_size=10;

   insert_max_heap(a,100,&heap_size);
    print_heap(a,heap_size);
   insert_max_heap(a,80,&heap_size);
   print_heap(a,heap_size);
   insert_max_heap(a,1,&heap_size);
    print_heap(a,heap_size);

    int index,NewValue;
    cin>>index>>NewValue;
    cout<< "increse index\n";
    increase_key(a,index,NewValue);
    print_heap(a,heap_size);


    return 0;
}
